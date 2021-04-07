#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void show(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
void swap(node *head,int x,int y)
{
 if(x==y)
return;
node *prevx=NULL,*currx=head,*prevy=NULL,*curry=head;
 while(currx->data!=x)
 {
     prevx=currx;
     currx=currx->next;
 }  
 while(curry->data!=y)
 {
     prevy=curry;
     curry=curry->next;
 }  
 if(currx==NULL || curry==NULL)
     return;
 if(prevx!=NULL)
prevx->next=curry;
else
head=curry;
if(prevy!=NULL)
prevy->next=currx;
else
head=currx;
//swap
node *temp=curry->next;
curry->next=currx->next;
currx->next=temp;    
}
void push(node **head,int new_data)
{
    node *new_node=new node;
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;
}
int main()
{
    node *head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    swap(head,2,3);
    show(head);
}
