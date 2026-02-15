#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,pat,rep; 
    getline(cin,s);
    cin>>pat>>rep;
    size_t pos = 0;
    while((pos = s.find(pat,pos)) != string::npos){
        s.replace(pos,pat.length(),rep);
        pos += rep.length();
    }
    cout<<s<<endl;
    return 0;
}