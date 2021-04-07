#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int a1[n];
    for(int i=0;i<n;i++)
        a1[i]=a[i];
    
for(i=0;i<n-1;i++)
{
    int s=0;
    int temp=a[n-1];
    for(int j=n-1;j>=1;j--)
        a[j]=a[j-1];
     a[0]=temp;   
    for(int i=0;i<n;i++)
    {
    if(a1[i]!=a[i])
    s+=1;
    }
    if(s>sum)
        sum=s;
}
cout<<sum;
}