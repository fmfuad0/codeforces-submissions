

// Submission link: https://codeforces.com/contest/1722/submission/244751481
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n ;
        string str;
        cin >> str;
        long long sum = 0;
        vector<int> index;
        for (int i = 0; i < n; i++)
        {
 
            if (str[i] == 'L')
            {
                sum += i;
                if (i < n / 2)
                {
                    index.push_back(i);
                }
            }
            else
            {
                sum += (n - i - 1);
                if ((i > n / 2) || (i == n / 2 && n % 2 == 0))
                {
                    index.push_back(n - (i + 1));
                }
            }
        }
        sort(index.begin(), index.end());
        for (auto i : index)
        {
            sum += (abs) (i - (n - i - 1));
            cout << sum << " ";
        }
        for (int i = index.size(); i < n; i++)
            cout << sum << " ";
        cout << endl;
    }
    return 0;
}