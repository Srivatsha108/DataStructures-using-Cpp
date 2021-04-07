#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a (n);
    vector<int> a2 (n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());    
    int i=0,j=(n-1)/2;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int i=0,j=0,k=1;i<n;i++)
    {
           if(i<=(n-1)/2)
           {
               a2[j]=a[i];
               j+=2;
           }
           else{
               a2[k]=a[i];
               k+=2;
           }
    }
    
    for(int k=0;k<n;k++)
        cout<<a2[k]<<" ";
}