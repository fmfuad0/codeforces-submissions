#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool ver = false;
        for (int i = str.size() - 1; i > 0; i--)
        {
            if (str[i] != '0')
            {
                string tmp1 = str.substr(0, i);
                string tmp2 = str.substr(i, str.size() - 1);
                if (stoi(tmp1) < stoi(tmp2))
                {
                    cout << stoi(tmp1) << " " <<  stoi(tmp2) << endl;
                    ver = true;
                    break;
                }
            }
        }
        if (!ver)
            cout << -1 << endl;
    }
    return 0;
}