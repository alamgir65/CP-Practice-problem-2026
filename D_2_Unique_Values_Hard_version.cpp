#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll ask(const vector<ll>& v) {
    cout << "? " << v.size() << " ";
    for (ll x : v) cout << x << " ";
    cout << endl << flush;   // ✅ important for interactive

    ll x;
    cin >> x;

    if (x == -1) exit(0);    // ✅ safety (invalid query)
    return x;
}

void solve() {
    ll n;
    cin >> n;

    ll first = -1, middle = -1, last = -1;

    //  Find last
    ll l = 3, r = 2 * n + 1;
    while (l <= r) {
        ll mid = (l + r) / 2;

        vector<ll> v;
        for (ll i = 1; i <= mid; i++) v.push_back(i);

        ll ans = ask(v);

        if ((v.size() - ans) % 2) {
            last = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    //  Find first
    l = 1, r = last - 2;
    while (l <= r) {
        ll mid = (l + r) / 2;

        vector<ll> v;
        for (ll i = mid; i <= last; i++) v.push_back(i);

        ll ans = ask(v);

        if ((v.size() - ans) % 2) {
            first = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    //  Find middle
    l = first + 1, r = last - 1;
    while (l <= r) {
        ll mid = (l + r) / 2;

        vector<ll> v;
        for (ll i = first; i <= mid; i++) v.push_back(i);
        v.push_back(last);

        ll ans = ask(v);

        if ((v.size() - ans) % 2) {
            middle = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    // Final answer
    cout << "! " << first << " " << middle << " " << last << endl << flush;
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