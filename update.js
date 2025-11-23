const fs = require("fs");
const path = require("path");
const https = require("https");

const HANDLE = "fmfuad";
const ROOT_DIR = "./contests";

// --- Utility for safe filenames ---
function sanitize(name) {
    return name.replace(/[<>:"/\\|?*]/g, "_");
}

// --- Fetch JSON using HTTPS ---
function fetchJson(url) {
    return new Promise((resolve, reject) => {
        https.get(url, res => {
            let data = "";
            res.on("data", chunk => data += chunk);
            res.on("end", () => resolve(JSON.parse(data)));
        }).on("error", reject);
    });
}

// --- APPEND submission link if missing ---
function appendLinkIfMissing(filePath, link) {
    if (!fs.existsSync(filePath)) return;

    const content = fs.readFileSync(filePath, "utf8");

    if (content.includes("Submission link")) return; // prevent duplicates

    const updated = content.replace(`Submission link: ${link}`, '');
    fs.writeFileSync(filePath, updated, "utf8");

    console.log("Updated:", filePath);
}

function iterateFolder(dirPath, accepted, parent='') {
    const entries = fs.readdirSync(dirPath, { withFileTypes: true });

    for (const entry of entries) {
        const fullPath = path.join(dirPath, entry.name);

        if (entry.isDirectory()) {
            console.log("📁 Folder:", fullPath);
            iterateFolder(fullPath, accepted, dirPath);   // <-- FIXED
        }
        else if (entry.name.endsWith(".cpp")) {

            // Extract clean problem name
            let fileName = entry.name
                .replace(".cpp", "")
                .replace(/^A\. /, "")
                .replace(/^B\. /, "")
                .replace(/^C\. /, "")
                .replace(/^D\. /, "")
                .trim();
            // console.log("📄 File:", fileName);

            // find exact accepted submission
            const sub = accepted.find(item => item.problem.name === fileName);

            if (!sub) {
                console.log("❌ No matched submission");
                continue;
            }
            // fs.writeFileSync()
            // console.log(fullPath,"\n" ,dirPath)
            const newPath = `ratings/${sub.problem.rating}/${entry.name}`;
            // console.log(newPath);
            const content = fs.readFileSync(fullPath, "utf8");
            console.log(content.length)
            // fs.mkdirSync(newPath, { recursive: true });
            fs.writeFileSync(newPath, content , "utf8");
            console.log("\t\tNew File Created: ", newPath);
        }
    }
}

// --- MAIN ---
async function main() {
    console.log("Fetching submissions for:", HANDLE);

    const apiUrl = `https://codeforces.com/api/user.status?handle=${HANDLE}`;
    const submissions = await fetchJson(apiUrl);

    if (submissions.status !== "OK") {
        console.error("API error:", submissions.comment);
        return;
    }

    const accepted = submissions.result.filter(s => s.verdict === "OK");
    console.log("Total accepted:", accepted.length);

    iterateFolder(ROOT_DIR, accepted);
}

main();
