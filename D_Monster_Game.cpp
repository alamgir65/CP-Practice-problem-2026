#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(x) x.begin(), x.end()

void solve() {
    int n;
    cin >> n;

    vll a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(all(a));
    vll pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + b[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll x = a[i];
        ll usable = n - i;
        ll k = upper_bound(all(pref), usable) - pref.begin() - 1;
        ans = max(ans, x * k);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
