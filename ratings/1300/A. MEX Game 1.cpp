

// Submission link: https://codeforces.com/contest/1943/submission/254377374

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        map<int , int > mapp;
        set<int> ss;
        int mini=INT_MAX;
        int cnt=0;
        int mex=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if(mapp[x]==1)
                ss.erase(x);
            else if(mapp[x]==0)
                ss.insert(x);
            mapp[x]++;
        }
        for(int i=0; i<n; i++)
        {
            if(mapp[i])
                mex++;
            else break;
        }
        if(ss.size()<2)
            cout << mex << endl;
        else
        {
            set<int>::iterator it=ss.begin();
            it++;
            cout << min(*it, mex) << endl;
        }
}
 
    return 0;
}