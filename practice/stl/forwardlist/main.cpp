#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int>l1;
    l1.assign({1,2,3});
    for(auto i:l1)
        cout<<i<<" ";
     forward_list<int>l2{4,9,3};
    l2.splice_after(l2.begin(),l1,l1.begin(),l1.end());
for(auto i:l2)
cout<<i<<" "; 
forward_list<int> l3(l2);

l3.splice_after(l3.begin(),l1,l1.before_begin(),l1.end());
for(auto i:l3)
cout<<i<<" ";  
}