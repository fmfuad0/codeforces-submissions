#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string str;
        cin >> n >> k >> str;
        map<char, vector<int>> mapp;
        for (int i = 0; i < n; i++)
        {
            mapp[str[i]].push_back(i);
        }
        int ans = INT_MAX;
        for (int i = 0, j = k - 1; i < n && j < n; i++, j++)
        {
            int dis = (upper_bound(mapp['W'].begin(), mapp['W'].end(), j) - mapp['W'].begin()) - (lower_bound(mapp['W'].begin(), mapp['W'].end(), i) - mapp['W'].begin());
            ans = min(ans, dis);
        }
        cout << ans << endl;
    }
    return 0;
}