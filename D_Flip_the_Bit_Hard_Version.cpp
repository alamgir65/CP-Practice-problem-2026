#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int &x : a) cin >> x;

        vector<int> p(k);
        for(int &x : p){
            cin >> x;
            x--; // 0-based
        }

        int x = a[p[0]];

        // Step 1: total bad segments
        int total = 0;
        for(int i = 0; i < n; ){
            if(a[i] == x){
                i++;
                continue;
            }
            total++;
            while(i < n && a[i] != x) i++;
        }

        // Step 2: count bad segments strictly between special indices
        int between = 0;

        for(int i = 0; i < k-1; i++){
            int l = p[i] + 1;
            int r = p[i+1] - 1;

            for(int j = l; j <= r; ){
                if(j > r || a[j] == x){
                    j++;
                    continue;
                }
                between++;
                while(j <= r && a[j] != x) j++;
            }
        }

        int ans = min(total, 1 + between);
        cout << ans << '\n';
    }

    return 0;
}