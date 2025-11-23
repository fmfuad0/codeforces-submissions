

// Submission link: https://codeforces.com/contest/1942/submission/254209243
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
    int mex=0;
    map<int, bool> mapp;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if(x<0)
        {
            cout << mex-x << ' ';
            mapp[mex-x]=true;
        }
        else
        {
            cout << mex << ' ';
            mapp[mex]=true;
            mex++;
        }
        while(mapp[mex])mex++;
    }
    cout << endl;
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