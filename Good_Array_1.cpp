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
    int n; cin>>n;
    vii a(n);
    for(auto &it:a) cin>>it;


    ll ans=0;
    map<int,int> t_mp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=i;k<=j;k++) t_mp[a[k]]++;
            // out2(i,j)
            int mn=imax;
            for(auto u:t_mp) mn=min(mn,u.second);
            if(mn>1) ans+=mn-1,i=j+1;
            // i=j;
            t_mp.clear();
        }
    }
    out(ans)
}
love{
    Alamgir
    int t=1; 
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}