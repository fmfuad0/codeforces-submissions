

// Submission link: https://codeforces.com/contest/1195/submission/254361843
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
void solve()
{
    int n, c;
    cin >> n >> c;
    if(c==(n*(n+1))/2)
        cout << 0;
    else
    {
        int step=1;
        int increas=1;
        long long total=1;
        while(step<=n) 
        {
            if(total-n+step==c)
            {
                cout << n-step << endl;
                return;
            }
            step++;
            increas++;
            total+=increas;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}