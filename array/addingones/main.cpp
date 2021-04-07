//You start with an array A of size N. Also, A[i] = 0 for i = 1 to N. You will be given K positive integers. Let j be one of these integers, you have to add 1 to all A[i], for i >= j. Your task is to print the array A after all these K updates are done.



#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    int b[k];
	    for(int i=0;i<k;i++)
	    cin>>b[i];
	    
	    for(auto j:b)
	    {
	        for(int i=0;i<n;i++)
	        {
	            if(i+1>=j)
	            a[i]+=1;
	        }
	    }
	    for(auto i:a)
	    cout<<i<<" ";
	    cout<<endl;
	}
	
}