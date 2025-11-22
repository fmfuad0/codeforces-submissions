#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
 
 
 
void solve()
{
    string str;
    int cnt = 0;
    cin >> str;
    while (!str.empty())
    {
        if (str.back() == 'A')
            cnt++;
        str.pop_back();
    }
    cout << ((cnt > 2) ? 'A' : 'B') << endl;
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