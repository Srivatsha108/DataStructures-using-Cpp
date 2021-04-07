//#include<iostream>
//using namespace std;
//int main()
// {
//	int t;
//	cin>>t;
//	while(t--)
//	{
//	    int n;
//	    cin>>n;
//	    int a[n];
//	    for(int i=0;i<n;i++)
//	    cin>>a[i];
//	    int sum=0;
//	    for(int i=1;i<n-1;i++)
//	    {
//	        if(a[i]==0)
//	        {
//	           int p=i-1,q=i+1;
//	            while(a[p]<a[i])
//	            p-=1;
//	            while(a[q]<a[i])
//	            q+=1;
//	            int k=a[p]<a[q]?a[p]:a[q];
//	           sum+=k-a[i];  
//	        }
//	        if(a[i]<a[i-1] && a[i]<a[i+1])
//	        {
//	           int k=a[i-1]<a[i-1]?a[i-1]:a[i+1];
//	           sum+=k-a[i];
//	           
//	        }
//	        else if(a[i-1]==0 && a[i+1]==0)
//	        {
//	            int p=i-1,q=i+1;
//	            while(a[p]<=0)
//	            p-=1;
//	            while(a[q]<=0)
//	            q+=1;
//	            int k=a[p]<a[q]?a[p]:a[q];
//	           sum+=k-a[i];
//            }
//	       else if(a[i-1]==0 && a[i+1]>0)
//	           {
//	               if(a[i+1]>a[i])
//	               sum+=a[i+1]-a[i];
//	               else
//	               {
//	                 int p=i-1,q=i+1;
//	            while(a[p]<a[i])
//	            p-=1;
//	            while(a[q]<a[i])
//	            q+=1;
//	            int k=a[p]<a[q]?a[p]:a[q];
//	           sum+=k-a[i];  
//	               }
//	           }
//	           else
//	           {
//	               if(a[i-1]>a[i])
//	               sum+=a[i-1]-a[i];
//	               else
//	               {
//	                 int p=i-1,q=i+1;
//	            while(a[p]<a[i])
//	            p-=1;
//	            while(a[q]<a[i])
//	            q+=1;
//	            int k=a[p]<a[q]?a[p]:a[q];
//	           sum+=k-a[i];  
//	               }
//	           }
//	        }
//	    cout<<sum<<endl;
//        }
//        
//	    
//	}
//    
//#include<iostream>
//using namespace std;
//int main()
// {
//	int t;
//	cin>>t;
//	while(t--)
//	{
//	    int n;
//	    cin>>n;
//	    int a[n];
//	    for(int i=0;i<n;i++)
//	    cin>>a[i];
//	    int sum=0;
//	    for(int i=1;i<n-1;i++)
//	    {
//	        if(a[i]==0)
//	        {
//	           int p=i-1,q=i+1;
//	            while(a[p]<a[i])
//	            p-=1;
//	            while(a[q]<a[i])
//	            q+=1;
//	            int k=a[p]<a[q]?a[p]:a[q];
//	           sum+=k-a[i];  
//	        }
//	        if(a[i]<a[i-1] && a[i]<a[i+1])
//	        {
//	           int k=a[i-1]<a[i-1]?a[i-1]:a[i+1];
//	           sum+=k-a[i];
//	           
//	        }
//	        else if(a[i-1]==0 && a[i+1]==0)
//	        {
//	            int p=i-1,q=i+1;
//	            while(a[p]<=0)
//	            p-=1;
//	            while(a[q]<=0)
//	            q+=1;
//	            int k=a[p]<a[q]?a[p]:a[q];
//	           sum+=k-a[i];
//            }
//	       else if(a[i-1]==0 && a[i+1]>0)
//	           {
//	               if(a[i+1]>a[i])
//	               sum+=a[i+1]-a[i];
//	               else
//	               {
//	                 int p=i-1,q=i+1;
//	            while(a[p]<a[i])
//	            p-=1;
//	            while(a[q]<a[i])
//	            q+=1;
//	            int k=a[p]<a[q]?a[p]:a[q];
//	           sum+=k-a[i];  
//	               }
//	           }
//	           else
//	           {
//	               if(a[i-1]>a[i])
//	               sum+=a[i-1]-a[i];
//	               else
//	               {
//	                 int p=i-1,q=i+1;
//	            while(a[p]<a[i])
//	            p-=1;
//	            while(a[q]<a[i])
//	            q+=1;
//	            int k=a[p]<a[q]?a[p]:a[q];
//	           sum+=k-a[i];  
//	               }
//	           }
//	        }
//	    cout<<sum<<endl;
//        }
//        
//	    
//	}
//    
//#include<iostream>
//using namespace std;
//int main()
// {
//	int t;
//	cin>>t;
//	while(t--)
//	{
//	    int n;
//	    cin>>n;
//	    int a[n];
//	    for(int i=0;i<n;i++)
//	    cin>>a[i];
//	    int sum=0;
//	    for(int i=1;i<n-1;i++)
//	    {
//	        int lmax=a[i-1],rmax=a[i+1];
//	        for(int j=i-1;j>=0;j--)
//	        {
//	            if(a[j]>lmax)
//	            lmax=a[j];
//	        }
//	        for(int j=i+1;j<n;j++)
//	        {
//	            if(a[j]>rmax)
//	            rmax=a[j];
//	        }
//	        if(lmax==a[i] && lmax<rmax)
//	        {
//	        sum+=rmax-lmax;
//	        continue;
//	        }
//	        if(rmax==a[i] && rmax<lmax)
//	        {
//	            sum+=lmax-rmax;
//	            continue;
//	        }
//	        if((lmax==a[i] && lmax>rmax) || (rmax==a[i] && rmax>lmax))
//	        continue;
//	        int k=lmax<rmax?lmax:rmax;
//	        sum+=k-a[i];
//	        
//	        
//	        
//	    }
//        
//	    cout<<sum<<endl;
//        
//	    
//	}
// }
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
        int a[n];
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        int k=
            
    }
}