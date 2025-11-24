

// Submission link: https://codeforces.com/contest/1730/submission/254361148
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, c;
    cin >> n >> c;
    map<int, int> mapp;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        mapp[x]++;
    }
    for(auto i:mapp)
    {
        if(i.second>c)
            ans+=c;
        else
            ans+=i.second;
    }
    cout << ans << endl;
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