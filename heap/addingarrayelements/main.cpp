#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    priority_queue<int,vector<int>,greater<int>>q;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	    cin>>a[i];
	    q.push(a[i]);
	    }
	    int cnt=0;
	    while(q.size()>1 && q.top()<k)
	    {
	        int a=q.top();
	        q.pop();
	        int b=q.top();
	        q.pop();
	        q.push(a+b);
	        cnt++;
	    }
	    if(q.size()<=2)
	    {
	       if(q.top()>=k)
	       cout<<cnt<<endl;
	       else
	       cout<<-1<<endl;
	    }
	    else
	    cout<<cnt<<endl;
	    
	}
}