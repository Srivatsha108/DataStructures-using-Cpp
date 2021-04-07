#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
    
};
void push(node **head,int new_data)
{
    node *temp=new node();
    node *temp2=*head;
    temp->data=new_data;
    temp->next=NULL;
    if(*head==NULL)
    {
        *head=temp;
        return;
    }
        
    
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp;
    return;
    
}
void show(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
void reverse(node **head)
{
    node *prev=NULL,*curr=*head,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
   *head=prev;
}
int main()
{
    node *head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    reverse(&head);
    show(head);
}