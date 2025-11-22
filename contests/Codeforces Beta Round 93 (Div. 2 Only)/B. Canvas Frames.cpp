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
    map<int, int> mapp;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mapp[x]++;
    }
    int ans = 0;
    for (auto i : mapp)
    {
        i.second /= 2;
        ans += i.second;
    }
    cout << ans / 2 << endl;
 
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