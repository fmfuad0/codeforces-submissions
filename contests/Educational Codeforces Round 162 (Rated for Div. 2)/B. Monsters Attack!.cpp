#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
#define pb push_back
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mapp;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    vector<int> index;
    map<int, bool> freq;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            mapp[x] += v[i];
            if (!freq[x])
            {
                index.push_back(x);
                freq[x] = true;
            }
        }
        else
        {
            mapp[x * -1] += v[i];
            if (!freq[x * -1])
            {
                index.push_back(x * -1);
                freq[x * -1] = true;
            }
        }
    }
    sort(index.begin(), index.end());
    long long arr[n + 1];
    arr[0] = 0;
    bool ver = true;
    for (ll i = 1; i <= n; i++)
    {
        arr[i] = arr[i - 1] + mapp[i];
        if (arr[i] > k * i)
        {
            ver = false;
            cout << "NO" << endl;
            break;
        }
    }
    if (ver)
        cout << "YES" << endl;
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