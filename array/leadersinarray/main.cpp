#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n-1;i++)
	    {

            int *k=max_element(a+i,a+n);
           
            if(a[i]>=*k)
            {
              cout<<a[i]<<" ";
            }
            
        }
        
        cout<<a[n-1]<<endl;
	}
}