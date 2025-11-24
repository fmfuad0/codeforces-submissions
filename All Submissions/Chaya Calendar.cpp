

// Submission link: https://codeforces.com/contest/1932/submission/248229312
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
    int n;
    cin >> n;
    ll maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        maxi = maxi + x - (maxi % x);
    }
    cout << maxi << endl;
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