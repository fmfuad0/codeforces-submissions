#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
 
void solve()
{
    int n;
    cin >> n;
    string ans = "aaa";
    n -= 3;
    int ind = 2;
    while (n > 0)
    {
        if (n > 25)
            ans[ind--] += 25;
        else
            ans[ind--] += n;
        n -= 25;
 
    }
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