#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    try
    {
                long t,n,i,count=0;
                long *ar=NULL;
                cin>>t;
                while(t--)
                {
                    cin>>n;
                    ar=new long[n];
                    count=0;
                    for(i=0;i<n;i++)
                        cin>>ar[i];
                    sort(ar,ar+n,greater<long>());
                    if(n==1)
                    {
                        cout<<1<<endl;
                        continue;
                    }
                    long first=0,next=1;
                    while(true)
                    {
                        if(ar[next]<ar[first])
                        {
                            count+=1;
                            first=next;
                            next+=1;
                        }
                        else
                        {
                            first+=1;
                            next+=1;
                        }
                        if(next==n)
                            break;			
                    }
                    cout<<count+1<<endl;
		
                }
    
    }
    catch(...)
    {
    }
}