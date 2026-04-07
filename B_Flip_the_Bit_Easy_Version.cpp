#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define vii vector<int>
#define endl '\n'
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
using namespace std;

void solve(){
    int n,k; 
    cin >> n >> k;
    vii a(n);
    for(auto &it : a) cin >> it;

    int x; 
    cin >> x;
    x--;
    int l = n, r = -1;

    for(int i = 0; i < n; i++){
        if(a[i] != a[x]){
            l = min(l, i);
            r = max(r, i);
        }
    }
    if(r < l){
        out(0)
        return;
    }
    vii d;

    for(int i = 0; i < n; i++){
        if(a[i] != a[x] && (i == 0 || a[i-1] == a[x])){
            // cout<<i<<" ";
            d.push_back(i);
        }
    }
    int n1 = lower_bound(all(d), x) - d.begin();
    int n2 = d.end() - upper_bound(all(d), x);

    // out2(n1,n2)
    out(max(2*n1, 2*n2));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}