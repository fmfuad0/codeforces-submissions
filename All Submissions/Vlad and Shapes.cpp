

// Submission link: https://codeforces.com/contest/1926/submission/247583080
#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
#define pb push_back
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        int cnt = 0;
        for (auto ch : str)
        {
            if (ch == '1')
                cnt++;
        }
        if (cnt > 0 && v.size() < 2)
            v.pb(cnt);
    }
    if (*(v.begin()) == *(v.end() - 1))
        cout << "SQUARE\n";
    else
        cout << "TRIANGLE\n";
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}