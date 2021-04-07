#include<bits/stdc++.h>
using namespace std;
struct interval
{
    int start,end;
};
bool compinterval(interval i1,interval i2)
{
return i1.start<i2.start;
}
int main()
{
    // int a[]={4,3,2,1,0};
    // sort(a,a+5);
    // for(auto i:a)
    //     cout<<i<<" ";
//     int b[]={34,54,6,4,2,5,643};
// sort(b,b+sizeof(b)/sizeof(b[0]),greater<int>());
// cout<<endl;
// for(auto i:b)
// cout<<i<<" ";  

//using own interval
  interval a[]={{4,5},{2,3},{3,6},{8,2}};
  sort(a,a+sizeof(a)/sizeof(a[0]),compinterval);
  for(auto i:a)
      cout<<"["<<i.start<<","<<i.end<<"]";
}