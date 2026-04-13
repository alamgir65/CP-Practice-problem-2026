#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        map<int,int> mp;
        for(auto &it:a) cin>>it,mp[it]++;
        sort(a.begin(),a.end());
        bool flag=false;
        for(auto u:mp) if(u.second > 1) flag=true;
        if(flag){
            cout<<-1<<endl;
            continue;
        }
        reverse(a.begin(),a.end());
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}