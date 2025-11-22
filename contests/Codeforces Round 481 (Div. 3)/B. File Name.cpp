#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define setprecision(x) cout << fixed << setprecision(x)
void mezbah(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
 
 
void seive(int n){
    vector<int>v(n+3);
    for(int i=2; i*i<=n; i++){
        if(v[i]==0){
            for(int j=i*i; j<=n; j+=i){
                v[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(v[i]==0)cout<<i<<" ";
    }
    cout<<endl;
}
 
vector<ll> mPrimeFact(ll x) {
	vector<ll> fact;
	for(ll i = 2; i * i <= x; i++) {
		ll cnt = 0; 
		while(x % i == 0) {
			cnt++;
			x /= i;
			fact.push_back(i);
		}
	}
	if(x > 1) fact.push_back(x);
	return fact;
}
 
ll lcm(ll a,ll b){
    ll g=__gcd(a,b);
    return (a*b/g);
}
 
 
 
int cel(int a,float l){
    return ceil(a/l);
}
 
void solve(){
int n ;
    cin >> n;
    string s; cin>>s;
    int cnt=0,sum=0;
    for(int i=0; i<n-2; i++){
        if(s[i]=='x' and s[i+1]=='x' and s[i+2]=='x')cnt++;
 
    }
    cout<<cnt<<endl;
}
 
// void solve(){
//     string s; cin>>s;
//     int n= s.size();
//     string s1="";
//     int cnt=0;
//     for(int i=0; i<n; i++){
//         s1+=s[i];
//         if(s[i]=='1')cnt++;
//         if(s[i]=='0') cnt=0;
//         if(cnt==5)s1+='0';
 
//     }
//     cout<<s<<endl;
//     cout<<"Stuffing: "<<s1<<endl;
    
//     string s2="";
//     cnt=0;
//     for(int i=0; i<s1.size(); i++){
//         s2+=s1[i];
//         if(s[i]=='1')cnt++;
//         else cnt=0;
//         if(cnt==5 and s1[i+1]=='0'){
//             cnt=0; 
//             i++;
//         }
 
 
//     } 
//     cout<<"De-Stuffing: "<<s2<<endl;
// }
 
 
int main() {
    mezbah();
    // int t;
    // cin>>t;
    
    // while(t--){
        solve();
    // }
    return 0;
}
 
 
 
 
 
 