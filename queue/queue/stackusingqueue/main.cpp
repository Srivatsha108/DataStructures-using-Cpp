#include<bits/stdc++.h>
using namespace std;

struct Stack{
    queue <int> q1,q2;
    int size=0;
    void push(int x)
    {
        size++;
        q2.push(x);
        while(!q1.empty())
        {
         q2.push(q1.front());
         q1.pop();   
        }
        swap(q1,q2);
    }
    void pop()
    {
        if(q1.empty())
        {
            cout<<"empty";
            return;
        }
        size--;
        q1.pop();
    }
    void top()
    {
        if(q1.empty())
        {
            cout<<"empty";
            return;
            
        }
        cout<<q1.front();
    }
    void sizes()
    {
        cout<<size;
    }
};
int main()
{
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.sizes();
    s1.top();
    s1.pop();
    s1.top();
    s1.pop();
    s1.top();
    s1.pop();
    
    
}