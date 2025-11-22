#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='@')
                cnt++;
            else if(str[i]=='*' && str[i+1]=='*')
                break;
        }
        cout << cnt << endl;
    }
}