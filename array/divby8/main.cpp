#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	  string s;
	  cin>>s;
	  int l=s.length();
	  int k=(int)s[l-1]+(int)s[l-2]*10+(int)s[l-3]*100;
	  if(k%8==0)
	  cout<<1<<endl;
	  else
	  cout<<-1<<endl;
	}
}