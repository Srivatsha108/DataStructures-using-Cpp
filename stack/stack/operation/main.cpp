#include<bits/stdc++.h>
using namespace std;
#define max 1000
class stack
{
    int top;
    
public:
int a[max];
   stack()
    {
        top=-1;
    }
    void push(int x);
    void pop();
    void show();
};
void stack::push(int x)
{
    if(top>=max-1)
    {
        cout<<"stack overflow";
        return;
    }
    a[++top]=x;
    cout<<x<<" pushed into stack"<<endl;
}
void stack::pop()
{
    if(top==-1)
    {
        cout<<"stack underflow";
        return;
        
    }
    int x=a[top--];
    cout<<x<<" removed from stack"<<endl;
}
void stack::show()
{
    if(top<0)
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    while(top>=0)
    {
        cout<<a[top--]<<" ";
    }
}
int main()
{
 class stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.show();
}