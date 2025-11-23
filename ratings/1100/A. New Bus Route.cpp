

// Submission link: https://codeforces.com/contest/792/submission/243301179
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<long long, int> mapp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long mini = INT_MAX;
    for (int i = n - 2; i >= 0; i--)
    {
        int d = (abs)(arr[i] - arr[i + 1]);
        mapp[d]++;
        if (d < mini)
            mini = d;
    }
    cout << mini << " " << mapp[mini] << endl;
    return 0;
}