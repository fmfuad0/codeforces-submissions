

// Submission link: https://codeforces.com/contest/1945/submission/253934328
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
#define pb push_back
 
void solve()
{
    int i, e, u;
    cin >> i >> e >> u;
    int ans=0;
    ans+=i;
    ans+=e/3;
    e%=3;
    if(e+u<3 && e!=0)
        cout << -1 <<endl;
    else
    {
        ans+=(e+u)/3;
        if((e+u)%3!=0)
            ans++;
        cout << ans <<endl;
    }
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