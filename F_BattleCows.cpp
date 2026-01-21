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

const ll MOD = 1e9+7;
static const int MAXN = 1 << 18;


int n, q;
int N;
int a[MAXN];
int xr[2 * MAXN];
int sz[2 * MAXN];

void build() {
    for (int i = 0; i < N; i++) {
        xr[N + i] = a[i];
        sz[N + i] = 1;
    }
    for (int i = N - 1; i >= 1; i--) {
        xr[i] = xr[i << 1] ^ xr[i << 1 | 1];
        sz[i] = sz[i << 1] + sz[i << 1 | 1];
    }
}

int solve_query(int idx, int val) {
    int pos = N + idx;
    int old = xr[pos];

    xr[pos] = val;
    int cur = pos;
    while (cur > 1) {
        cur >>= 1;
        xr[cur] = xr[cur << 1] ^ xr[cur << 1 | 1];
    }

    int ans = 0;
    cur = pos;

    while (cur > 1) {
        int p = cur >> 1;
        int L = p << 1;
        int R = p << 1 | 1;

        bool isLeft = (cur == L);
        int xl = xr[L], xr_ = xr[R];

        bool leftWins;
        if (xl > xr_) leftWins = true;
        else if (xl < xr_) leftWins = false;
        else leftWins = true;

        if (isLeft && !leftWins) ans += sz[R];
        if (!isLeft && leftWins) ans += sz[L];
        cur = p;
    }


    xr[N + idx] = old;
    cur = (N + idx) >> 1;
    while (cur >= 1) {
        xr[cur] = xr[cur << 1] ^ xr[cur << 1 | 1];
        cur >>= 1;
    }

    return ans;
}

void solve() {
    cin >> n >> q;
    N = 1 << n;
    for (int i = 0; i < N; i++) cin >> a[i];
    build();

    while (q--) {
        int b, c;
        cin >> b >> c;
        b--;
        out(solve_query(b, c));
    }
}

love {
    Alamgir
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
