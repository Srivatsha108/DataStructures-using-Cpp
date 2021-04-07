#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long int tot=0;
	    long long int s;
	    int n,k=1;
	    cin>>n;
	    for(auto i=1;i<=n;i++)
	    {
        s=1;
	    for(auto j=1;j<=i;j++)
	    {
	    s*=k;
	    k++;
	    }
	    tot+=s;   
	    }
	    cout<<tot<<endl;
	}
}