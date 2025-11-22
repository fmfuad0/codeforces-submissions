#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
        v.push_back(i + 1);
    int leader = 0;
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        int index = (leader + a) % v.size();
        cout << v[index] << " ";
        v.erase(v.begin() + index);
        if (index == v.size())
            leader = 0;
        else
            leader = index;
    }
    return 0;
}