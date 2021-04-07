#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    for(int i=1;i<=5;i++)
        a.push_back(i);
    for(auto i=a.begin();i!=a.end();++i)//a.cbegin(),a.cend();
cout<<*i<<" ";
cout<<endl;
for(auto i=a.rbegin();i!=a.rend();++i)//crbegin(),crend();
cout<<*i<<" ";
cout<<endl;   
cout<<a.at(3)<<endl;
cout<<"front"<<a.front()<<endl;
cout<<"back"<<a.back()<<endl;
a.resize(3);
cout<<"resize"<<endl;
for(auto i:a)
cout<<i<<" ";
cout<<endl;
cout<<"pushback 5"<<endl;
a.push_back(5);
for(auto i:a)
cout<<i<<" ";
cout<<endl;
cout<<"capacity"<<a.capacity()<<endl;
cout<<"max size"<<a.max_size()<<endl;
cout<<"remove back";a.pop_back();
for(auto i:a)
cout<<i<<" ";
cout<<endl;

a.erase(a.begin(),a.begin()+2);
cout<<endl<<a.size();
a.clear();
cout<<endl<<a.size();
}