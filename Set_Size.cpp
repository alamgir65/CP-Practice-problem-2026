#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    ll n,q;
	cin>>n>>q;
	vll arr(n);
	for(auto &it:arr) cin>>it;
	sort(all(arr));
	
	vll drr(n-1),pfx(n,0);
	for(int i=1;i<n;i++) drr[i-1] = arr[i]-arr[i-1];
	sort(all(drr));
	
	for(int i=1;i<n;i++) pfx[i] = pfx[i-1]+drr[i-1];
	
	while(q--){
	    ll x;
	    cin>>x;
	    
	    ll big = drr.end()-upper_bound(all(drr),x);
	    ll small = drr.size()-big;
	    
	    cout<<((big+1)*1LL*x)+pfx[small]<<endl;
	}
}
love{
    Alamgir
    int t=1; 
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}