#include<bits/stdc++.h>
using namespace std;
#define size 5
int a[size];
int front=-1,rear=-1;
bool isfull()
{
    return((front==0 && rear==size-1) || (front==rear+1));
    
}
bool isempty()
{
    return(front==-1);
}
void insertfront(int data)
{
    if(isfull())
    {
        cout<<"overflow"<<endl;
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(front==0)
        front=size-1;
    else
         front--;
a[front]=data;    
}
void insertrear(int data)
{
    if(isfull())
    {
        cout<<"overflow"<<endl;
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear==size-1)
        rear=0;
    else
    rear++;
    a[rear]=data;
}
void deletefront()
{
    if(isempty())
    {
        cout<<"underflow"<<endl;
        return;
    }
    if(front==rear)
        front=rear=-1;
    else if(front==size-1)
front=0;
else
front++;
    
}
void deleterear()
{
    if(isempty())
    {
        cout<<"underflow"<<endl;
        return;
    }
    if(front==rear)
        front=rear=-1;
    else if(rear==0)
rear=size-1;
else
rear--;    
}
void show()
{
    if(isempty())
    {
        cout<<"empty!"<<endl;
        return;
        
    }
    if(rear>=front)
    {
        for(int i=front;i<=rear;i++)
            cout<<a[i]<<" ";
    }
    else{
        for(int i=0;i<=front;i++)
            cout<<a[i]<<" ";
            for(int j=rear;j<size;j++)
                cout<<a[j]<<" ";
    }
}
int main()
{
   
    insertrear(5);
    insertrear(10);
    deleterear();
    insertrear(2);
    show();
    cout<<endl;
    insertrear(4);
    insertfront(15);
    deletefront();
    cout<<endl;
    insertfront(23);
    show();
} 