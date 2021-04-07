#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(i+1==a[i])
        b[i]=a[i];
        else
        b[a[i]-1]=i+1;
        }
        for(auto i:b)
        cout<<i<<" ";
        cout<<endl;
    }
}