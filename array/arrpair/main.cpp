#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int s=7,l=0,r=4;
    while(l<r)
    {
        if(a[l]+a[r]==s)
        {
            cout<<a[l]<<" "<<a[r]<<endl;
           
        }
       else if(a[l]+a[r]<s)
             l++;
       else 
             r--;     
    }
}