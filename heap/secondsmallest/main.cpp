//#include <iostream>
//using namespace std;
//int main(int argc, char **argv)
//{
//int a[]={1,2,3,2,2,3,4,5,4,6};
//int first,second;
//first=second=INT_MAX;
//for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
//{
//    if(a[i]<first)
//    {
//        second=first;
//        first=a[i];
//    }
//    else if(a[i]<second && a[i]!=first)
//        second=a[i];
//}
//if(second==INT_MAX)
//    cout<<"not possible"<<endl;
//else    
//cout<<first<<" "<<second<<endl;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    swap(a[0],a[2]);
    for(auto i:a)
    cout<<i<<" ";
}