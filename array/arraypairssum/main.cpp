//#include<iostream>
//using namespace std;
//int main()
// {
//	int t;
//	cin>>t;
//	while(t--)
//	{
//	    int n;
//	    cin>>n;
//	    int a[n];
//	    for(int i=0;i<n;i++)
//	    cin>>a[i];
//	    int sum=0;
//	    for(int i=0;i<n-1;i++)
//	    {
//	        for(int j=i+1;j<n;j++)
//	        {
//	            if(a[j]-a[i]>1)
//                    sum+=a[j]-a[i];
//            }
//	    }
//	    cout<<sum<<endl;
//	}
//}
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n%8==0)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
}