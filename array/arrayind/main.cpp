#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a2(n);
    vector<int>a3(n);
    int arr[n],ind[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>ind[i];
    }
    int i=0;
    for(auto j:ind)
        a2[i++]=arr[j];
    for(auto j:ind)
       a3[j]=arr[j];    
    for(auto k:a2)
cout<<k<<" ";
cout<<endl;
for(auto k:a3)
cout<<k<<" ";    
}