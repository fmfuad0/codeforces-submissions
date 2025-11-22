#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
 
void solve()
{
    int a, b;
    cin >> a >> b;
    int cnt1=0, cnt2=0;
    for (int i = 0; i < a; ++i)
    {
        int x;
        cin >> x;
        if(x>=b)
            cnt1+=x;
        else if(x==0 && cnt1!=0)
        {
            cnt1--;
            cnt2++;
        }
    }
    cout << cnt2 << endl;
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