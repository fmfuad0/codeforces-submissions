

// Submission link: https://codeforces.com/contest/1931/submission/246397666
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
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int l = 1, r = n - 1;
    int l2 = 0, r2 = n - 1;
    while (arr[l] == arr[0])
        l++;
    while (arr[r] == arr[0])
        r--;
    while (arr[l2] == arr[n - 1])
        l2++;
    while (arr[r2] == arr[n - 1])
        r2--;
 
    cout << ((l >= n || r < 0) ? 0 : min((r2 - l2 + 1), (r - l + 1))) << endl;
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