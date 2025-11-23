

// Submission link: https://codeforces.com/contest/978/submission/246879495
#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
 
 
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    map<int, bool> mapp;
    vector<int> ans;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (mapp[v[i]])
            continue;
        ans.push_back(v[i]);
        mapp[v[i]] = true;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto i : ans)
        cout << i << " ";
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}