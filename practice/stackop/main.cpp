#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	stack <int> s;
	for(int j=n-1;j>=0;j--)
	s.push(a[j]);
	int cnt=1;
	int temp=s.top();
	s.pop();
	while(!s.empty() && cnt<k)
	{
		if(s.top()>=temp)
		{
			temp=s.top();
			s.pop();

		}
		else
		s.pop();
		cnt++;
	}
	if(s.size()==0)
	{
	    if(cnt<=k)
	    cout<<temp;
	    else
	    cout<<-1;
	}
	else
	cout<<temp;

}