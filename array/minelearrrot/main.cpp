#include<iostream>
using namespace std;
void find_min(int a[],int n,int l,int h)
{
    while(true)
    {
        int mid=(l+h)/2;
        if(a[mid-1]>a[mid])
        {
            cout<<a[mid];
            break;
        }
        else if(a[mid]>a[n-1])
            l=mid+1;
        else
              h=mid-1;    
    }
}
int main()
{
    int a[]={87,92,99,10,35,49,53};
    find_min(a,5,0,4);
}