//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//set<int>s;
//int n;
//cin>>n;
//for(int i=0;i<n;i++)
//{
//    int k;
//    cin>>k;
//    s.insert(k);
//}
// int no;
//cin>>no;
//auto it=s.begin();
//for(size_t i=0;i<no-1;i++)
//it++;
//cout<<*it; 
//}
#include<iostream>
using namespace std;
int main()
 {
	int n,i,j,t,r;
	cin>>t;
	
	
	for(int p=0;p<t;p++)
	{
	 cin>>n>>r;
	 int a[n];
	 for(i=0;i<n;i++)
	 cin>>a[i];
	for(int i=0;i<r%n;i++)
	{
	int temp=a[0];
	for(j=0;j<n-1;j++)
	a[j]=a[j+1];
	a[j]=temp;
	}
	for(auto i:a)
	cout<<i<<" ";
	}

}






//def fun(n):
//
//  
//   if(n==1):
//    return 1;
//   elif(n%2==0):
//    return n+fun(n//2);
//   else:
//      return n+fun(3*n+1);
//
//n=int(input())
//d=fun(n);
//print(d);


  
    

#include<bits/stdc++.h>
int fun(int);
using namespace std;
int main()
{
int n;
cin>>n;
int d=fun(n);
cout<<d;
}
int fun(int n)
{
  
   if(n==1)
   return 1;
   else if(n%2==0)
    return n+fun(n/2);
   else
      return n+fun(3*n+1);
  }