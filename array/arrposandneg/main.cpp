#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0;    
    while(i<n)
    {
        int j=i+1,k;
        if(i%2==0 && a[i]>=0)
        {
            while(a[j]>=0)
                j+=1;
            int temp=a[j];
            for(k=j;k>=i;k--)
               a[k]=a[k-1];
            a[k]=temp;   
            i=0; 
            continue;

        } 
        if(i%2!=0 && a[i]<0)
        {
            while(a[j]<0)
                j+=1;
            int temp=a[j];
            for(k=j;k>=i;k--)
               a[k]=a[k-1];
            a[k]=temp; 
            i=0;   
            continue; 
        } 
        i++;
    } 
for(int p=0;p<n;p++)
cout<<a[p]<<" ";   
}