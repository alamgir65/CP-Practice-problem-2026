#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll p, q;
    cin >> p >> q;

    ll s = p + 2LL * q;
    ll x = 2LL * s + 1;

    ll an = -1, am = -1;

    for (ll k = 1; k * k <= x; k += 2) {
        if (x % k == 0) {
            ll e = x / k;
            ll n = (k - 1) / 2;
            ll m = (e - 1) / 2;
            if (n > 0 && m > 0) {
                if (q <= n * (m + 1)) {
                    an = n;
                    am = m;
                    break;
                }
            }
        }
    }

    (an != -1)? cout << an << " " << am << "\n" : cout<<-1<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}