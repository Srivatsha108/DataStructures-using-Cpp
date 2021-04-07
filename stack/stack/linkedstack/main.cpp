#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void push(node *&head,int data)
{
    node *temp=new node;
    temp->data=data;
    temp->next=head;
    head=temp;
    cout<<data<<" pushed into stack"<<endl;
}
void pop(node *&head)
{
    node *temp=head;
    int k=temp->data;
    cout<<k<<" popped from stack";
    head=temp->next;
    delete temp;
}
void show(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node *head=NULL;
    push(head,10);
    push(head,20);
    push(head,30);
    push(head,40);
    cout<<endl;
    pop(head);
    cout<<endl;
    show(head);
}