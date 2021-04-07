#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	long long n,q;
	cin>>n>>q;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
    while(q--)
	{
	int k;
	cin>>k;
	
	if(k==1)
	{
		int l;
		cin>>l;
		if(a[l-1]==0)
		a[l-1]=1;
		else
		a[l-1]=0;
	}
	
	else{
        int x,y;
		cin>>x>>y;
		if(a[y-1]==0)
		cout<<"ODD";
		else
		cout<<"EVEN";

	}
	}
    
}