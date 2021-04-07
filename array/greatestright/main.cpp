#include<iostream>
#include<algorithm>
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
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n-1;i++)
	    {
	        int *k=max_element(a+i,a+n);
	        a[i]=*k;
	    }
	    a[n-1]=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(i==n-1)
	        cout<<a[i]<<endl;
	        else
	        cout<<a[i]<<" ";
	    }
	    
	}
	
}