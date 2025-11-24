

// Submission link: https://codeforces.com/contest/978/submission/284722660
#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
 
 
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<ll> pref(n);
    cin >> v[0];
    pref[0] = v[0];
    for (int i = 1; i < n; ++i)
    {
        cin >> v[i];
        pref[i] = pref[i - 1] + v[i];
    }
    for (int i = 0; i < k; ++i)
    {
        ll x;
        cin >> x;
        int index = lower_bound(pref.begin(), pref.end(), x) - pref.begin();
        ll diff = (abs)(x - pref[index - 1]);
        cout << index + 1 << " " << ((index == 0) ? x : diff) << endl;
    }
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