#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     int rot;
cin>>rot;
int k=rot%n,j,i;
for(i=0;i<k;i++)
{
    int temp=a[0];
    for(j=0;j<n-1;j++)
        a[j]=a[j+1];
        a[j]=temp;
}   
for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}