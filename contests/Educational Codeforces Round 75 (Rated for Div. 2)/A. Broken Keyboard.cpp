#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string str;
    cin >> str;
    map<char, int> mapp;
    string result="";
    int length=1;
    if(str.size()==1)
        cout << str << endl;
    else
    {
        for(int i=1; i<=str.size(); i++)
        {
            if(str[i]!=str[i-1])
            {
                if(length%2==1 && !mapp[str[i-1]])
                {
                    result+=str[i-1];
                    mapp[str[i-1]]=true;
                }
                length=1;
            }
            else
            {
                length++;
                if(i==str.size()-1 && !mapp[str[i]] && length%2==1)
                {
                    result+=str[i];
                    mapp[str[i]]=true;
                }
            }
        }
        sort(result.begin(), result.end());
        cout << result << endl;
    }
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