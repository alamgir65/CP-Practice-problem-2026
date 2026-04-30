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
//
ll modpow(ll a, ll b)
{
    ll res = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
ll modinv(ll a)
{
    return modpow(a, MOD - 2);
}
vector<ll> factt(10001, -1);
ll factorial(ll n)
{
    if (n <= 10000 && factt[n] != -1)
        return factt[n];
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = (res * i) % MOD;
    return factt[n] = res;
}
map<pair<ll, ll>, ll> mp;
ll ncr(ll n, ll r)
{
    if (mp.count({ n, r }))
        return mp[{ n, r }];
    if (r > n)
        return 0;
    ll num = factorial(n);
    ll den = (factorial(r) * factorial(n - r)) % MOD;
    return mp[{ n, r }] = (num * modinv(den)) % MOD;
}
int check_only_for_zero(vector<int> a, int idx){
    int l=idx-1, r=idx+1;
    set<int> track;
    track.insert(0);
    while(l >= 0 && r < a.size()){
        if(a[l] == a[r]){
            track.insert(a[l]);
            l--;
            r++;
        }else break;
    }
    int i=0;
    for(auto val: track){
        if(val != i) return i;
        i++;
    }
    return track.size();
}
void solve(){
    int n; cin>>n;
    vii a(2*n);
    int x=-1,y=-1;
    for(int i=0;i<2*n;i++){
        cin>>a[i];
        if(a[i] == 0){
            if(x==-1) x=i;
            else y=i;
        }
    }
    int first_ans = max(check_only_for_zero(a, x), check_only_for_zero(a, y));
    int x1 = x, y1 = y;
    set<int> track;
    while(x <= y){
        if(a[x] == a[y]){
            track.insert(a[x]);
            x++;
            y--;
        }else break;
    }
    while(x1 >= 0 && y1 < 2*n){
        if(a[x1] == a[y1]){
            track.insert(a[x1]);
            x1--;
            y1++;
        }else break;
    }
    // cout<<"X : "<<x<<" Y : "<<y<<endl;
    int ans = 0;
    if(x < y && a[x] != a[y]){
        ans=1;
    }
    else{
        // for(auto val: track) cout<<val<<" ";
        // cout<<endl;
        int i=0;
        bool found=false;
        for(auto val: track){
            if(val != i){
                ans=i;
                found=true;
                break;
            }
            i++;
        }
        if(!found) ans=track.size();
    }
    out(max(ans, first_ans))
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