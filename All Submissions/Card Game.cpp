

// Submission link: https://codeforces.com/contest/1932/submission/248240445
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
    char ch; cin >> ch;
    map<char, vector<string>> mapp;
    map<char, int> size;
 
    for (int i = 0; i < 2 * n; ++i)
    {
        string str;
        cin >> str;
        mapp[str[1]].pb(str);
        size[str[1]]++;
    }
    ll total = 0;
    ll cnt = 0;
    for (auto i : size)
    {
        if (i.first != ch)
        {
            total += i.second / 2;
            i.second %= 2;
            if (i.second == 1)
                cnt++;
        }
    }
 
    if (size[ch] < cnt)
        cout << "IMPOSSIBLE\n";
    else
    {
        int index = 0;
        sort(mapp[ch].begin(), mapp[ch].end());
        for (auto i : mapp)
        {
            if (i.first != ch)
            {
                sort(i.second.begin(), i.second.end());
                if (size[i.first] % 2 != 1)
                {
                    for (int j = 0; j < i.second.size(); ++j)
                    {
                        cout << i.second[j];
                        if ((j % 2 == 1 && j != 1) || j == i.second.size() - 1)
                            cout << endl;
                        else
                            cout << " ";
                    }
                }
                else
                {
                    for (int j = 0; j < i.second.size() - 1; ++j)
                    {
                        cout << i.second[j];
                        if ((j % 2 == 1) || j == i.second.size() - 2)
                            cout << endl;
                        else
                            cout << " ";
                    }
                    cout << i.second[i.second.size() - 1] << " " << mapp[ch][index] << endl;
                    index++;
                }
            }
        }
        int tmp = 0;
        while (index < mapp[ch].size())
        {
            cout << mapp[ch][index] ;
            tmp++;
            if (tmp % 2 == 0)
            {
                cout << endl;
                tmp = 0;
            }
            else
                cout << " ";
            index++;
        }
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