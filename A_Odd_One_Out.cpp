#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<vector<pair<int,int>>> adj(n+1);
    
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    
    vector<long long> dist(n+1, LLONG_MAX);
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
    
    dist[1] = 0;
    pq.push({0, 1});
    
    while(!pq.empty()){
        auto [d, u] = pq.top(); pq.pop();
        if(d > dist[u]) continue;
        for(auto [v, w] : adj[u]){
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    
    for(int i = 2; i <= n; i++){
        cout << (dist[i] == LLONG_MAX ? -1 : dist[i]);
        if(i < n) cout << "\n";
    }
    cout << "\n";
    
    return 0;
}