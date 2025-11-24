

// Submission link: https://codeforces.com/contest/1950/submission/254009944
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    string ans="";
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            int tmp=2;
            while(tmp--)
            {
                ans+="##";
                for(int j=0; j<n-1; j++)
                {
                    if(j%2==0)
                        ans+="..";
                    else
                        ans+="##";
                }
                ans+="\n";
            }
        }
        else
        {
            int tmp=2;
            while(tmp--)
            {
                ans+="..";
                for(int j=0; j<n-1; j++)
                {
                    if(j%2==0)
                        ans+="##";
                    else
                        ans+="..";
                }
                ans+="\n";
            }
        }
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}