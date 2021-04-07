#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack <char> st;
	st.push(s[0]);
	int i=1;
	while(i<s.size())
	{
		if(st.size()==0)
		{
		st.push(s[i]);
		}
		else if(s[i]==st.top())
		{
			st.pop();
			
		}
		else
		{
			st.push(s[i]);
		}
		i++;
	}
     vector <char> a;
	 while(st.size()!=0)
	 {
		 a.push_back(st.top());
		 st.pop();
	 }
	 reverse(a.begin(),a.end());
	if(a.size()==0)
	cout<<"Empty String";
	else{
	 for(auto i:a)
	 cout<<i;
	}
}