#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int cnt=0,n2=n;
    int x=0;
    vector<int> v;
    while(n != 0){
        cnt++;
        v.push_back(n%10);
        n /= 10;
    }
    for(int u:v) x += pow(u,cnt), cout<<x<<" ";
    cout<<x<<endl;
    (x == n2)? cout<<"Armstong Number" : cout<<"Not Armstong";
    return 0;
}