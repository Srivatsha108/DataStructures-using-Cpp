#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=0 && a[i]==a[i+1])
        {
            a[i]*=2;
            a[i+1]=0;
        }
    } 
for(int i=0;i<n;i++)
{
    if(a[i]!=0)
    {
        a[c]=a[i];
        c++;
    }
} 
while(c<n)
{
    a[c]=0;
    c++;
}  
for(auto i:a)
    cout<<i<<" ";
}