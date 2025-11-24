

// Submission link: https://codeforces.com/contest/1935/submission/249964787
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
    bool ver = false;
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] >= str[str.size() - i - 1])
        {
            if (str[i] > str[str.size() - i - 1])
            {
                ver = true;
                break;
            }
            else
                continue;
        }
        else
            break;
    }
    if (!ver)
        cout << str << endl;
    else
    {
        for (int i = str.size() - 1; i >= 0; i--)
        {
            cout << str[i];
        }
        cout << str << endl;
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