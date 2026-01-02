#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int ans=pow((n/2)+1,2);
        cout<<ans<<"\n";
    }
    else
    {
        int ans=(n+3)*(n+1)/2;
        cout<<ans<<"\n";
    }
}