

// Submission link: https://codeforces.com/contest/1575/submission/244609152
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n, m;
        cin >> n >> m;
        map<string, int> mapp;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            mapp[str] = i;
            for (int j = 1; j < m; j += 2)
            {
                str[j] = (char)('Z' - (str[j] - 'A'));
                v[i] = str;
            }
        }
        sort(v.begin(), v.end());
        for (auto i : v)
        {
            for (int j = 1; j < m; j += 2)
            {
                i[j] = (char)('Z' - (i[j] - 'A'));
            }
            cout << mapp[i] + 1 << " ";
        }
    return 0;
}