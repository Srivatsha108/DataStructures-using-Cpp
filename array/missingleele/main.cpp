#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int a[n];
//    int total=n*(n+1)/2;
//    for(int i=0;i<n-1;i++)
//    {
//        cin>>a[i];
//        total-=a[i];
//    }
//    cout<<total;
//}
//    
//    
//    
int main()
{
    int n,x=0,y=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        y^=a[i];
    }
    for(int i=1;i<=n;i++)
    x^=i;
    cout<<(x^y);    
        
}