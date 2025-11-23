

// Submission link: https://codeforces.com/contest/797/submission/243756347
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void getDevisors(int n, vector<int> &ans, int &k)
{
    while (n > 1)
    {
        if (ans.size() == k - 1)
        {
            ans.push_back(n);
            n = 0;
        }
        else if (n == 2 || n == 3 || n == 5)
        {
            ans.push_back(n);
            break;
        }
        else
        {
            if (n % 2 == 0)
            {
                for (int i = 2; i <= n / 2; i++)
                {
                    if (n % i == 0)
                    {
                        getDevisors(i, ans, k);
                        getDevisors(n / i, ans, k);
                        n = 0;
                    }
                    else if (i == n / 2)
                    {
                        ans.push_back(n);
                        n = 0;
                    }
                }
            }
            else
            {
                for (int i = 3; i <= n / 2; i += 2)
                {
                    if (n % i == 0)
                    {
                        getDevisors(i, ans, k);
                        getDevisors(n / i, ans, k);
                        n = 0;
                    }
                    else if (i >= n / 2 - 1)
                    {
                        ans.push_back(n);
                        n = 0;
                    }
                }
            }
 
        }
    }
}
 
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    if (k == 1)
        ans.push_back(n);
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                getDevisors(i, ans, k);
                if (n / i > 1)
                    getDevisors(n / i, ans, k);
                break;
            }
        }
    }
 
    if (ans.size() == k)
    {
        for (auto i : ans)
            cout << i << " ";
    }
    else
        cout << -1 << endl;
    return 0;
}