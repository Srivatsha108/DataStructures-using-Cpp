#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void push(node *&last,int new_data)
{
    node *new_node=new node;
    new_node->data=new_data;
    if(last!=NULL)
    {
        new_node->next=last->next;
        last=new_node;
   
    }
    else{
        last=new_node;
        last->next=last;
        
    }
    
    
}
void insert(node *head,int data)
{
    node *temp=head;
    node *ptr=new node;
    ptr->data=data;
    if(data<temp->data)
    {
        ptr->next=head;
        while(temp->next!=head)
            temp=temp->next;
          temp->next=ptr;  
    }
    else{
        while(temp->data<data && temp->next->data<data)
        {
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
}
void show(node *head)
{
    node *temp=head;
    if(head!=NULL)
    {
        while(temp->next!=head){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
int main()
{
    node *last=NULL;
    push(last,13);
    push(last,9);
    push(last,5);
    push(last,1);
    show(head);
//    cout<<endl;
//    insert(head,8);
//    show(head);
}