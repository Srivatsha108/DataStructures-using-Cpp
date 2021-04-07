#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,c,n,p=0,sum=0;
	cin>>t;
	while(t--)
	{
		cin>>c>>n;
    long long int k=c/n;
    while(k>0)
    {
        p=k*n+n*(n-1)/2;
        if(p>c)
            k--;
        else
        {
            sum=c-p;
            break; 
            
        }   
    }
    if(k==0)cout<<c<<endl;
    else cout<<sum<<endl;
	}
}
