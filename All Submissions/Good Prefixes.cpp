

// Submission link: https://codeforces.com/contest/1985/submission/278442347
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define pb push_back
 
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<ll, bool> tmp;
    ll sum=0;
    int ans=0;
    for (int i = 0; i < n; ++i)
    {
        cin>> arr[i];
        sum+=arr[i];
        tmp[arr[i]]=true;
        if(tmp[sum/2]==true && sum%2==0)
        {
            ans++ ;
        }
    }
    cout << ans << endl;
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