

// Submission link: https://codeforces.com/contest/1907/submission/268789170
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        stack<int> lower ;
        stack<int> upper ;
        int u=0, l=0;
        string str;
        cin >> str;
        map<int, bool> mapp;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='b' || str[i]=='B')
            {
                mapp[i]=true;
                if(str[i]=='b' && lower.size()>0)
                {
                    mapp[lower.top()]=true;
                    lower.pop();
                }
                else if(str[i]=='B' && upper.size()>0)
                {
                    mapp[upper.top()]=true;
                    upper.pop();
                }
            }
            else
            {
                if(islower(str[i]))
                {
                    lower.push(i);
                }
                else
                {
                    upper.push(i);
                }
            }
        }
        for(int i=0; i<str.size(); i++)
        {
            if(mapp[i])
                continue;
            cout << str[i];
        }
        cout << endl;
        
    }
    return 0;
}