#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int l = 1, r = n;
        vector<int> a;
        while(l <= r) {
            a.push_back(l++);
            if(l <= r) a.push_back(r--);
        }
        for(int i=0; i<n; i++) {
            cout << a[i] << (i==n-1 ? "\n" : " ");
        }
    }
    return 0;
}