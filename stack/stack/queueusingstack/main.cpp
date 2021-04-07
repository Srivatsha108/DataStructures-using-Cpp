#include<bits/stdc++.h>
using namespace std;

void enqueue(stack <int> &s1,int data)
{
    stack<int>s2;
    cout<<data<<" entered into queue"<<endl;
    while(!s1.empty())
    {
       s2.push(s1.top());
       s1.pop();
    }
    s1.push(data);
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
        
    }
}
void dequeue(stack <int> &s1)
{
    int k=s1.top();
    s1.pop();
    cout<<k<<" removed from queue";
}
void show(stack <int> s)
{
    while(!s.empty())
    {
    cout<<s.top();
    s.pop();
    }
}
int main()
{
    stack <int> s1;
    enqueue(s1,1);
    enqueue(s1,2);
    enqueue(s1,3);
    dequeue(s1);
    show(s1);
}
