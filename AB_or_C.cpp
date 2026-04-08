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
    vector<pair<int,int>> vals; 
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        vals.pb({a,i});
        vals.pb({b,i});
        vals.pb({c,i});
    }
    sort(all(vals));
    
    vector<int> cnt(n,0);
    int covered = 0;
    ll ans = 2e9;
    int l = 0;
    
    for(int r=0;r<(int)vals.size();r++){
        int row = vals[r].second;
        if(cnt[row]==0) covered++;
        cnt[row]++;
        
        while(covered == n){
            ans = min(ans, (ll)vals[r].first - vals[l].first);
            int lrow = vals[l].second;
            cnt[lrow]--;
            if(cnt[lrow]==0) covered--;
            l++;
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