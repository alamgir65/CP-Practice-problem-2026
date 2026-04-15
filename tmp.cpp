#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rrep(i, a, b) for(int i = (a); i >= (b); i--)

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    ll t,h,u, ans=0;
    cin >> t >> h >> u;

    ll tmp = min({t,h,u});
    ans += tmp*7LL;
    t-=tmp, h-=tmp, u-=tmp;

    if(h==0)
    {
        tmp = min(t,u);
        ans += tmp*4LL;
        t-=tmp, u-=tmp;
        if(t==0)
        {
            ans += u*3LL;
        }   
        else if(u==0 && t)
        {
            // ans += (3+(2*(t-1)));
            ans += 2LL*t + 1;
        }     
    }
    else if(u==0)
    {
        tmp = min(t/2, h);
        ans += tmp*7LL;
        t -= tmp*2, h-=tmp;

        
        tmp = min(t,h);
        ans += tmp*5LL;
        t -= tmp, h-=tmp;

        if(t==0)
            ans += h*3LL;
        else if(t)
            ans += 3+(2LL*(t-1));
    }
    else if(t==0)
    {
        ans += (h+u)*3LL;
    }

    cout << ans << endl;
}

int main ()
{
    optimize();
              
    int t = 1;
    cin >> t;

    while(t--)
        solve();
        
    return 0;
}