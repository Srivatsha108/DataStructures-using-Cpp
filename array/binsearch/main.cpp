#include<iostream>
using namespace std;
void bsearch(int a[],int key,int l,int h)
{
    int c=0;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key)
        {
        c=1;
       break;
        }
        else if(key<a[mid])
            h=mid-1;
         else
             l=mid+1;   
    }
    if(c==0)
    cout<<"element"<<key<<" not found";
    else
        cout<<"element "<<key<<" found at "<<mid;
}
int main()
{
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
bsearch(a,key,0,n-1);
    
}
