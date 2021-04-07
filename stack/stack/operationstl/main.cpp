#include<bits/stdc++.h>
using namespace std;
void show(stack <int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"entered data is"<<endl;
    show(s);
    cout<<endl;
    s.pop();
    cout<<"final"<<endl;
    show(s);
}