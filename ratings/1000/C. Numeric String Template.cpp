

// Submission link: https://codeforces.com/contest/2000/submission/278923948
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define pb push_back
 
void solve()
{
    int n;
    cin >> n;
    map<int, vector<int>> mapp;
    vector<int> singles;
    map<char, bool> ch;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mapp[x].push_back(i);
    }
    int q;
    cin >> q;
    while(q--)
    {
        string str;
        cin >> str;
        bool result=true;
        if(str.size()!=n)
            result=false;
        if(result)
        {
            for(auto i:mapp)
            {
                if(i.second.size()>1)
                {
                    char tmp=str[i.second[0]];
                    if(ch[tmp]==true)
                    {
                        result=false;
                        break;
                    }
                    ch[tmp]=true;
                    for(auto j:i.second)
                    {
                        if(str[j]!=tmp)
                        {
                            result=false;
                            break;
                        }
                    }
                }
                else
                    singles.push_back(i.second[0]);
            }
            for(auto i:singles)
            {
                if(ch[str[i]])
                {
                    result=false;
                    break;
                }
                else
                    ch[str[i]]=true;
            }
        }
        if(result)
            cout << "YES\n";
        else
            cout << "NO\n";
        ch.clear();
        singles.clear();
    }
}
 
 
 
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout); 
#endif
    int t = 1 ;
    cin >> t;
    while (t--)
        solve();
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}