//Given an array of size N with all initial values as 0, write a program to perform following M range increment operations as shown below:
 

increment(a, b, k) : Increment values from 'a'
                     to 'b' by 'k'.  

After M operations, calculate the maximum value 
in the array.

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,c,b,k;
	    cin>>n>>m;
	    vector<int>a(n);
	    for(int i=0;i<m;i++)
	    {
	        cin>>c>>b>>k;
	        for(int j=c;j<=b;j++)
	        a[j]+=k;
	    }
	    cout<<*max_element(a.begin(),a.end())<<endl;
	}
}