#include<bits/stdc++.h>
using namespace std;
float get_mean(vector<int> a,int n)
{
    if(n==1) return a[0];
    return (get_mean(a,n-1)*(n-1)+a[n-1])/n;
}
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;
    float ans = get_mean(a,n);
    cout<<ans<<endl;
    return 0;
}