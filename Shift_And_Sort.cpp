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
    bool nisi=false;
    for(int i=0;i<n-1;i++){
        if(a[i] > a[i+1]){
            int d=(a[i]-a[i+1])/2;
            if((a[i]-a[i+1])%2==1) d++;
            a[i] -= d;
            a[i+1] += d;
            i++;
        }
    }
    // for(auto x:a) cout<<x<<" ";nl
    for(int i=1;i<n;i++){
        if(a[i-1] > a[i]){
            cno
            return;
        }
    }
    cyes
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