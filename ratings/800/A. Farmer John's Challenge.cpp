

// Submission link: https://codeforces.com/contest/1942/submission/254202313
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
    int n, k;
    cin >> n >> k;
    if(k!=1 && k!=n)
        cout << -1 << endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(k==n)
                cout << 1 << ' ';
            else
                cout << i << ' ';
        }
        cout << endl;
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