

// Submission link: https://codeforces.com/contest/1945/submission/253999432
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define pb push_back
 
void solve()
{
    ll a, b, m;
    cin >> a >> b >> m;
    ll ans=2;
    ans+=m/a;
    ans+=m/b;
    cout << ans << endl;
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