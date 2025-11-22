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
    int arr[n];
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int res = sum / n;
    bool ver = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < res)
        {
            cout << "NO\n";
            ver = false;
            break;
        }
        arr[i + 1] += (arr[i] - res);
    }
    if (ver)
        cout << "YES\n";
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