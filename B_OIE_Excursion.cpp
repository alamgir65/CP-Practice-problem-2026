#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        vector<ll> a(n);
        for(auto &it:a) cin>>it;
        ll mx=1;
        ll x=1;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                x++;
                mx=max(mx,x);
            }else{
                mx=max(mx,x);
                x=1;
            }
        }
        (mx >= m)? cout<<"NO\n" : cout<<"YES\n";
    }
    return 0;
}