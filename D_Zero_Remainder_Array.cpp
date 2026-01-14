#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vii vector<int>
#define out(x) cout << x << '\n';
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, k;
    cin >> n >> k;

    map<int, ll> mp;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int rem = a % k;
        if (rem != 0) {
            mp[rem]++;
        }
    }

    ll x = 0;     // current increment
    ll ans = 0;   // total operations

    while (!mp.empty()) {
        int need = (k - (x % k)) % k;

        if (mp.count(need)) {
            // we can use this remainder directly
            mp[need]--;
            if (mp[need] == 0) mp.erase(need);
            x++;
            ans++;
        } else {
            // take smallest remainder and push x forward
            auto it = mp.begin();
            int r = it->first;

            ll add = (k - (x % k)) + r;
            ans += add;
            x += add;

            it->second--;
            if (it->second == 0) mp.erase(it);
        }
    }

    out(ans)
}

int main() {
    fast
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
