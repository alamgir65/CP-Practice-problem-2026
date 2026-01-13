#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define all(x) x.begin(), x.end()
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define nl cout << endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int, int>
#define out(x) cout << x << '\n';
#define out2(x, y) cout << x << " " << y << '\n';
#define vii vector<int>
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define vsum(x) accumulate((x).begin(), (x).end(), 0LL)
#define fix(n, val) fixed << setprecision(n) << val
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
// Constants
const long double pi = 3.141592653589793238;
const ll MOD = 1e9 + 7;

// checks
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
} //__gcd
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void solve()
{
}
love
{
    Alamgir int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        long long low = n, high = n;
        int steps = 0;

        while (low > k)
        {
            low = low / 2;
            high = (high + 1) / 2;
            steps++;
        }
        //gg

        if (low <= k && k <= high)
            cout << steps << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}