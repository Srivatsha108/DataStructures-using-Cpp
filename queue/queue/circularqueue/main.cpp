#include<bits/stdc++.h>
#define size 5
using namespace std;
int front=-1,rear=-1;
int arr[size];
void enqueue(int data)
{
    if((front==0 && rear==size-1)||(rear==(front-1)%(size-1)))
    {
        cout<<"queue overflow!";
        return;
    }
    else if(front==-1)
    {
        front=rear=0;
        arr[rear]=data;
    }
    else if(rear==size-1 && front!=0)
    {
        rear=0;
        arr[rear]=data;
    }
    else{
        arr[++rear]=data;
    }
}
void dequeue()
{
    if(front==-1){
        cout<<"queue underflow!";
        return;
    }
    else if(front==rear)
        front=rear=-1;
    else if(front==size-1)
       front=0;
else
front++;    
}
void show()
{
    if(front==-1){
        cout<<"empty";
        return;
    }
    else if(rear>=front)
    {
        for(int i=front;i<=rear;i++)
            cout<<arr[i]<<" ";
    }
    else{
        for(int i=front;i<size;i++)
            cout<<arr[i]<<" ";
        for(int j=0;j<=rear;j++)
cout<<arr[j]<<" ";    
    }
}
int main()
{
    enqueue(14);
    enqueue(22);
    enqueue(13);
    enqueue(-6);
    dequeue();
    dequeue();
    show();
}