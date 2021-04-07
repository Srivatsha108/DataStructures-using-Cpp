#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void insert_end(node **head,int new_data)
{
    node *new_node=new node();
    node *temp=*head;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        return;
        
    }
    
    while(temp->next!=NULL)
        temp=temp->next;
   
    temp->next=new_node;
    return;
}
void display(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main()
{
    node *head=NULL;
    insert_end(&head,1);
    insert_end(&head,2);
    insert_end(&head,3);
    insert_end(&head,4);
    insert_end(&head,5);
    display(head);
}