#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    string time;
    cin >> time;
    string result="";
    bool ver=false;
    if(stoi(time.substr(0, 2))>=12)
    {
        ver=true;
        if(stoi(time.substr(0, 2))>12)
        {
            if((stoi(time.substr(0, 2))-12)<10)
                result+='0';
            result+=to_string(stoi(time.substr(0, 2))-12);
        }
        else
            result+=time.substr(0, 2);
    }
    else
    {
        if(time.substr(0, 2)=="00")
            result+="12";
        else
        result+=time.substr(0, 2);
    }
    result+=':';
    result+=time.substr(3, 2);
    result+=' ';
    if(ver)
        result+="PM";
    else
        result+="AM";
    cout << result <<endl;
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