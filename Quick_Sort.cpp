#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &v,int l,int r)
{
    int idx = l;
    for(int i=l;i<r;i++)
    {
    if(v[i] <= v[r]){
            swap(v[idx],v[i]);
            idx++;
        }
    }
    swap(v[idx],v[r]);
    return idx;
}
void quickSort(vector<int> &v,int l,int r){
    if(l >= r) return;
    int pivot = partition(v,l,r);
    quickSort(v,l,pivot-1);
    quickSort(v,pivot+1,r);
}
int main()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    quickSort(arr,0,n-1);
    cout<<"After sorting : \n";
    for(auto x:arr) cout<<x<<" ";
    cout<<endl;
    return 0;
}