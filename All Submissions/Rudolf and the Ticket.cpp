

// Submission link: https://codeforces.com/contest/1941/submission/250897936
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n], arr2[m];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<m; i++)
            cin >> arr2[i];
        sort(arr, arr+n);
        sort(arr2, arr2+m);
        int cnt=0;
        for(int i=0;i<n && arr[i]<=k; i++)
            for(int j=0; j<m && (arr[i]+arr2[j]<=k); j++)
                cnt++;
        cout << cnt << endl;
    }
 
    return 0;
}