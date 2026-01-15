#include<bits/stdc++.h>
using namespace std;
int main(){
int i, n,j,item,k, a[50];
cout<<"Enter the element:"<<endl;
cin>>n;
cout<<"Enter the array:"<<endl;
for(i=0; i<n; i++){
cin>>a[i];}
cout<<"Enter a item:"<<endl;
cin>>item;
cout<<"kth position where i want to insert a value:"<<endl;
cin>>k;
for(j=n; j>=k; j--)
    {
a[j+1]=a[j];
}
a[k]=item;
n++;
cout<<"after insertion:"<<endl;
for(i=0; i<n; i++){
cout<<" "<<a[i];}
return 0;
}
