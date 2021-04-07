#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,char>p1;
    p1.first=189;
    p1.second='s';
    cout<<p1.first<<" "<<p1.second;
    pair<int,string>p2(108,"srivatsha");
    cout<<p2.first<<" "<<p2.second;
    pair<int,int>p3(p1);
    cout<<p3.first<<" "<<p3.second;
    pair<int,int>p4=make_pair(2,3);
    cout<<p4.first<<" "<<p4.second;
    //relational
    pair<int,char>p5=make_pair(4,'a');
    pair<int,char>p6=make_pair(3,'b');
    cout<<endl<<(p5==p6);
    cout<<endl<<(p5>p6);
    p5.swap(p6);
    cout<<p5.first<<endl<<p6.first;
    
}