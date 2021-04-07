#include<iostream>
using namespace std;
int main()
{
    int n,j,i,k;
    cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    for(i=0;i<n-1;i++)
    {
        int temp=a[n-1];
        for(j=n-1;j>=1;j--)
        {
            a[j]=a[j-1];
        }
        a[j]=temp;
        int sum=0;
        for(k=0;k<n;k++)
        {
         sum+=k*a[k];   
        }
        if(sum>s)
            s=sum;
        
    }
    cout<<s;
    }

