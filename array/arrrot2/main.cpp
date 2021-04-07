//#include<bits/stdc++.h>
//using namespace std;
//void rotate_left(int [],int,int);
//void rotate_right(int [],int,int);
//void print(int [],int);
//void reverse(int [],int,int);
//int main()
//{
//    int n;
//    cout<<"enter size";
//    cin>>n;
//    int a[n];
//    cout<<"enter array";
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    char ch;
//    int k;
//    cout<<"enter no of rot and l/r rotation";
//    cin>>k>>ch;
//    if(ch=='l')
//        rotate_left(a,n,k%n);
//    if(ch=='r')
//        rotate_right(a,n,k%n);
//   
//}
//void reverse(int a[],int l,int h)
//{
//    while(l<h)
//    {
//        swap(a[l],a[h]);
//        l++;
//        h--;
//    }
//}
//void print(int a[],int n)
//{
//    for(int i=0;i<n;i++)
//        cout<<a[i]<<" ";
//}    
//
//void rotate_left(int a[],int n,int k)
//{
//    reverse(a,0,k-1);
//    reverse(a,k,n-1);
//    reverse(a,0,n-1);
//    print(a,n);
//    
//        
//}
//void rotate_right(int a[],int n,int k)
//{
//    reverse(a,0,n-1);
//    reverse(a,0,k-1);
//    reverse(a,k,n-1);
//    print(a,n);
//    
//        
//}
#include<bits/stdc++.h>
using namespace std;
void rotate_left(int [],int,int);
void print(int [],int);
void reverse(int [],int,int);
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
  int n,r;
    cin>>n>>r;;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    rotate_left(a,n,r%n);
    }
   
}
void reverse(int a[],int l,int h)
{
    while(l<h)
    {
        swap(a[l],a[h]);
        l++;
        h--;
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
}    

void rotate_left(int a[],int n,int k)
{
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    reverse(a,0,n-1);
    print(a,n);
    
        
}
