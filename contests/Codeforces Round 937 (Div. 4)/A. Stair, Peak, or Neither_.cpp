#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a<b && b<c)
        cout << "STAIR\n";
    else if(a<b && b>c)
        cout << "PEAK\n";
    else
        cout << "NONE\n";
 
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