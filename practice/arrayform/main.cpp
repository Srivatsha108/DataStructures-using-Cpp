#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	stack <int> s;
	queue <int> q;
	for(auto i:a)
	{
		int c=0;
		for(int j=2;j<=i/2;j++)
		{
        if(i%j==0)
		{
			c=1;
			break;
		}
		}
		if(c==0)
		q.push(i);
		else
		s.push(i);
	}
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}