#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void push(node **head,int new_data)
{
    node *new_node=new node();
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;
    
}

void mid(node *head)
{
    node *temp1=head,*temp2=head;
    int c=0;
    if(head!=NULL)
    {
       while(temp2!=NULL && temp2->next!=NULL)
       {
           temp2=temp2->next->next;
           temp1=temp1->next;
       } 
       cout<<temp1->data;
    }
}
int main() 
{ 
    /* Start with the empty list */
   node *head=NULL;
  
    // create linked 35->15->4->20 
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 35); 
    push(&head,50);
  
    mid(head); 
    return 0; 
} 