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
    int a, b, l;
    cin >> a >> b >> l;
    int cnt = 0;
    vector<int>v;
    bool ver = false;
    int A = 1;
    while (A <= l)
    {
        int B = 1;
        while (B <= l / A)
        {
            if (l % (A * B) == 0)
            {
                v.pb(l / (A * B));
                ver = true;
                cnt++;
            }
            B *= b;
        }
        A *= a;
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size() << endl;
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