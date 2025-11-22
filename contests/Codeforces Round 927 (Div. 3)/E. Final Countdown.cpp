#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
#define ll long long
#define pb push_back
 
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string result;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += stoi(str.substr(i, 1));
    }
    int rem = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        result += to_string((sum + rem) % 10);
        rem = (sum + rem) / 10;
        sum -= stoi(str.substr(i, 1));
        if (i == 0 && rem > 0)
            result += to_string(rem);
    }
    int i = result.size() - 1;
    while (result[i] == '0')
        i--;
    for (i; i >= 0; --i)
        cout << result[i];
    cout << endl;
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