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
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1 && a[i]==i)
            continue;
        else
        {
            
                if(a[a[i]]==-1)
                    swap(a[a[i]],a[i]);
                else
                {
                     while (a[a[i]] != -1 && a[a[i]] != a[i])
                     {
                    int x=a[a[i]];
                    a[a[i]]=a[i];
                    a[i]=x;
                     
                     }
                }
                    
                
        }    
        
        
        
    }    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}