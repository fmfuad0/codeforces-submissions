#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
#define pb push_back
void solve()
{
    int n;
    cin >> n ;
    vector<int>v(n);
    bool one = false;
    int cnt = 0;
    int start = 0, end = 0;
    for (int i = 0; i < n; ++i)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            cnt++;
        }
        else
        {
            if (one)
                end = i;
            else
            {
                one = true;
                start = i;
                end = i;
            }
        }
        v[i] = cnt;
    }
    cout << v[end] - v[start] << endl;
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