

// Submission link: https://codeforces.com/contest/1352/submission/244915944
#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debuging.h"
#endif
 
#define ll long long
#define all(x) x.begin(), x.end()
void solve() {
	ll n, k;
	cin >> n >> k;
	ll lb = 1, rb = 1e9;
	while (lb < rb) {
		ll mid = lb + (rb - lb) / 2;
		if (k <= mid * n - mid) rb = mid;
		else lb = mid + 1;
	}
	cout << lb + k - 1 << '\n';
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