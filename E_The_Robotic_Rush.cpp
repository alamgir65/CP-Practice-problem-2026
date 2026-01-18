#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
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
#define vsum(x) accumulate((x).begin(), (x).end(), 0LL)
#define fix(n, val) fixed << setprecision(n) << val
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
//Constants
const long double pi= 3.141592653589793238;
const ll MOD=1e9+7;

//checks
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

void solve(){
    int n,m,k; 
    cin>>n>>m>>k;

    vll a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    string s;
    cin>>s;

    choto(b);

    vii pr(k+1,0);
    for(int i=1;i<=k;i++){
        pr[i]=pr[i-1]+(s[i-1]=='R'?1:-1);
    }

    unordered_map<int,int> mp;
    mp.reserve(2*k);
    for(int i=0;i<=k;i++){
        if(!mp.count(pr[i])) mp[pr[i]]=i;
    }

    int mn=*min_element(all(pr));
    int mx=*max_element(all(pr));

    vii di(n,k+1);

    for(int i=0;i<n;i++){
        auto it=lower_bound(all(b),a[i]);
        if(it!=b.end()){
            int d=*it-a[i];
            if(d>=mn && d<=mx) di[i]=min(di[i],mp[d]);
        }
        if(it!=b.begin()){
            --it;
            int d=*it-a[i];
            if(d>=mn && d<=mx) di[i]=min(di[i],mp[d]);
        }
    }

    vii df(k+2,0);
    for(int i=0;i<n;i++){
        if(di[i]<=k) df[di[i]]++;
    }

    int al=n;
    for(int i=1;i<=k;i++){
        al-=df[i];
        cout<<al<<" ";
    }
    nl
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