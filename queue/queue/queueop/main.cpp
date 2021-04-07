#include<bits/stdc++.h>
using namespace std;
#define size 5
int q[size];
int front=-1,rear=-1;
void enqueue(int x)
{
    if(rear==size-1)
        cout<<"queue overflow!"<<endl;
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        q[rear]=x;
    }    
    else{
        q[++rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
        cout<<"queue underflow!"<<endl;
    else if(front==rear)
front=rear=-1;
else
{
    front++;
}    
}
void show()
{
    for(int i=front;i<=rear;i++)
        cout<<q[i]<<" ";
}
int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(3);
    dequeue();
    show();
    enqueue(2);
    enqueue(1);
    cout<<endl;
    show();
    enqueue(6);
    cout<<endl;
    show();
}