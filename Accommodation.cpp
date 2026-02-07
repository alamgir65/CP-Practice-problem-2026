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
    ll b,g,x,y,n; cin>>b>>g>>x>>y>>n;
    ll l=1,r=min(b/x + (b%x!=0),g/y + (g%y!=0)),mid,ans=-1;
    while(l<=r){
        mid=(l+r)/2;
        ll mn_boys = mid*x,mn_girls = mid*y;
        ll aro_rakha_jabe = (n-(x+y))*mid;
        ll baki_ache = b+g-mn_boys-mn_girls;
        if(aro_rakha_jabe >= baki_ache && mn_boys <= b && mn_girls <= g){
            r=mid-1;
            ans=mid;
        }else{
            l=mid+1;
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