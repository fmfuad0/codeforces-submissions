

// Submission link: https://codeforces.com/contest/1886/submission/246913425
#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
 
 
 
void solve()
{
    int n;
    cin >> n ;
    if (n < 6)
        cout << "NO\n";
    else
    {
        int x, y, z;
        x = 1;
        y = 2;
        z = n - x - y;
        if (z % 3 == 0)
        {
            z -= 2;
            y += 2;
        }
        if (x == y || y == z || x == z)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << x << " " << y << " " << z << endl;
        }
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