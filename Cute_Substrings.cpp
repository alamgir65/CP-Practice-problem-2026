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
bool check_cute(string s){
    int n=s.size();
    if(n%2==0) return false;
    for(int i=0;i<n;i++){
        if(i%2==0 && (s[i] == 'u' || s[i]=='o')){
            continue;
        }else if(i%2 && s[i]=='w') continue;
        else return false;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int cnt=0,mx=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string sub=s.substr(i,j-i+1);
            if(check_cute(sub)){
                cnt++;
                mx=max(mx,(int)sub.size());
            }
        }
    }
    out(mx)
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