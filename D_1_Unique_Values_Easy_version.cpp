#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n + 1);
        for (int i = 0; i < 2 * n + 1; i++) {
            cin >> a[i];
        }

        unordered_map<int, vector<int>> pos;

        for (int i = 0; i < 2 * n + 1; i++) {
            pos[a[i]].push_back(i + 1); // store 1-based index
        }

        for (auto &it : pos) {
            if (it.second.size() == 3) {
                cout << it.second[0] << " "
                     << it.second[1] << " "
                     << it.second[2] << "\n";
                break;
            }
        }
    }

    return 0;
}