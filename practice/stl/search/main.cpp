#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={234,5,352,5,46,2,6,46,235,6436,32};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    if(binary_search(a,a+n,446))
        cout<<"found";
    else
        cout<<"not found";    
}