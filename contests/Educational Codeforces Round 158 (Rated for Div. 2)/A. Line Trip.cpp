#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
 
#define ll long long
void solve() {
    int n, x;
    cin >> n >> x;
    bool ver = false;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        // if (arr[i] < x)
        // {
        //     maxi = max(maxi, arr[i] - arr[i - 1]);
        //     if (arr[i + 1] > x)
        //     {
        //         maxi = max(maxi, 2 * (x - arr[i]));
        //     }
        // }
        // else
        //     break;
        maxi = max(maxi, arr[i] - arr[i - 1]);
    }
    maxi = max(maxi, 2 * (x - arr[n - 1]));
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