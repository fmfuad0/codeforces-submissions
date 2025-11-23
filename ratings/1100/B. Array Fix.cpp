

// Submission link: https://codeforces.com/contest/1948/submission/254766219
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    bool result=true;
    int lastDigit=0;
    for (int i = 0; i < n; ++i)
    {
        int x=arr[i];
        if(x<10)
        {
            if(x<lastDigit)
            {
                result=false;
                break;
            }
            else
                lastDigit=x;
        }
        else
        {
            if(i<n-1)
            {
                if(x/10>=lastDigit && x%10>=x/10 && x%10<=arr[i+1])
                {
                    lastDigit=x%10;
                }
                else if(x>=lastDigit)
                {
                    lastDigit=x;
                }
                else
                {
                    result=false;
                    break;
                }
            }
            else if(i==n-1 && x>=lastDigit)
                result=true;
            else
                result=false;
            
        }
    }
    if(result)
        cout << "YES\n";
    else
        cout << "NO\n";
 
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