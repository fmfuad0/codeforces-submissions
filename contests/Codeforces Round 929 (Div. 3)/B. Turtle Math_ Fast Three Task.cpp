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
    ll sum = 0;
    map<int, int> mapp;
    for (int i = 0; i < n ; i++)
    {
        int x;
        cin >> x;
        sum += x;
        mapp[x % 3]++;
    }
    if (sum % 3 == 0)
        cout << 0 << endl;
    else
    {
        if (sum % 3 == 1)
        {
            if (mapp[1] > 0)
                cout << 1 << endl;
            else
                cout << min(n, 2) << endl;
        }
        else
            cout << 1 << endl;
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