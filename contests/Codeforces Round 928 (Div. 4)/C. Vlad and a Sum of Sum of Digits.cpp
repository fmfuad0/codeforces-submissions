#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
#define pb push_back
vector<int> v(200001);
 
int sumOfDigits(int a)
{
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
 
void solve()
{
    // debug(v);
    int n;
    cin >> n;
    cout << v[n] << endl;
 
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    v[0] = 0;
    for (int i = 1; i <= 200001; ++i)
    {
        v[i] = v[i - 1] + sumOfDigits(i);
    }
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}