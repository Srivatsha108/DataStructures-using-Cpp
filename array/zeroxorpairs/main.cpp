#include<iostream>
using namespace std;
int main()
 {
//	int t;
//	cin>>t;
//	for(int i=0;i<t;i++)
//	{
//	    int n;
//	    cin>>n;
//	    int a[n];
//	    for(int j=0;j<n;j++)
//	    cin>>a[j];
//	    int c=0;
//	    for(int k=0;k<n-1;k++)
//	    {
//	        for(int l=k+1;l<n;l++)
//            {
//	        if((a[k])^(a[l])==0)
//	        c++;
//            }
//	    }
//	    cout<<c<<endl;
//	}
//	return 0;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
        cout<<(a[i]^a[j])<<" ";
}    
}