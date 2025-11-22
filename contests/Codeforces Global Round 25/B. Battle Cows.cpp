#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define pb push_back
 
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int cnt=0, result=0, tmp=0;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n; ++i)
    {
        if(arr[i]>arr[k-1])
        {
            i++;
            while(arr[i]<arr[k-1] && i<n)
            {
                tmp++;
                i++;
            }
            if(cnt==0)
                result=tmp;
            else if(tmp==0)
                result=max(1, cnt-1);
            else
                result=max(cnt-1, tmp+1);
            break;
        }
        else if(arr[i]==arr[k-1])
        {
            i++;
            while(arr[i]<arr[k-1] && i<n)
            {
                tmp++;
                i++;
            }
            result=cnt+tmp;
            break;
        }
        else
            cnt++;
    }
    cout << result << endl;
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