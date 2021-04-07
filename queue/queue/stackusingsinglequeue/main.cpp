#include<bits/stdc++.h>
using namespace std;
class Stack
{
    public:
 int size;
 queue<int>q;
void push(int x)
{
 int c=q.size();
 q.push(x);
 for(int i=0;i<c;i++)
 {
     q.push(q.front());
     q.pop();
 }
   
}
void pop()
{
    if(q.empty())
    {
        cout<<"empty"<<endl;
        return;
    }
    q.pop();
}
void top()
{
    if(q.empty())
    {
        cout<<"empty"<<endl;
        return;
    }
    cout<<q.front()<<endl;
}
   
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.top();
    s.pop();
    s.top();
    
}