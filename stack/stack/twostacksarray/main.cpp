#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *arr,size;
    int top1,top2;
public:
Stack(int n)
{
    arr=new int[n];
    size=n;
    top1=-1;
    top2=size-1;
}
void push1(int data)
{
    if(top1<=top2-1)
    {
        cout<<data<<" entered into stack1"<<endl;
        arr[++top1]=data;
        
    }
    else{
        cout<<"stack1 overflow"<<endl;
        return;
    }
}
void push2(int data)
{
    if(top1<=top2-1)
    {
        cout<<data<<" entered into stack2"<<endl;
        arr[--top2]=data;
        
    }
    else{
        cout<<"stack2 overflow"<<endl;
        return;
    }    
}
void pop1()
{
    if(top1>-1)
    {
        cout<<arr[top1--]<<" removed from stack1"<<endl;
    }
    else{
        cout<<"stack underflow"<<endl;
        return;
    }
}
void pop2()
{
    if(top2<=size-1)
    {
        cout<<arr[top2++]<<" removed from stack2"<<endl;
    }
    else{
        cout<<"stack underflow"<<endl;
        return;
    }
}
void show()
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
};
int main()
{
    Stack s(5);
    s.push1(1);
    s.push2(2);
    s.push2(3);
    s.push1(4);
    s.push1(5);
//    s.push1(5);
//    s.pop1();
//    s.push2(10);
//    s.pop2();
    s.show();
}
 