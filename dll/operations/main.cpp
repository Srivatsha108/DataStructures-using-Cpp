#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prev,*next;
};
void push(node *&head,int data)
{
    node *temp=new node;
    temp->data=data;
    temp->prev=NULL;
    temp->next=head;
    
    
        if(head!=NULL)
        {
            
        head->prev=temp;
        }
    
     head=temp;
}
void append(node *&head,int data)
{
    node *temp=head,*new_node=new node;
    new_node->data=data;
    new_node->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->prev=temp;
    
}
void after(node *&h,int data,int ins)
{
    node *head=h;
    node *temp=new node;
    temp->data=data;
    if(head==NULL)
    {
        cout<<"invalid";
        return;
    }    
    
    while(head->data!=ins)
        head=head->next;
    if(head->next==NULL)
    {
        temp->next=NULL;
        head->next=temp; 
    
    }
   else
   {
       temp->next=head->next; 
     head->next=temp;
temp->prev=head;
temp->next->prev=temp;

   }

  
    
}
void show(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void dele(node *head,node *&del)
{
    node *temp=head;
if(head==NULL || del==NULL)
{
    cout<<"invalid";
    return;
}
if(temp==del)
{
    head=del->next;
    del->next=NULL;
    head->prev=NULL;
    delete del;
}
else
{
    while(temp!=del)
        temp=temp->next;
     if(temp->next==NULL)
     {
         temp->prev->next=NULL;
         temp->prev=NULL;
         delete temp;
     } 
else{
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
    }  
}}
void reverse(node *head)
{
    node *current=head;
    node *temp=NULL;
    while(current!=NULL)
    {
     temp=current->prev;
current->prev=current->next;
current->next= temp;
temp=current->prev;  
    }
    if(temp!=NULL)
        head=temp->prev;
    
}

int main()
{
node *head=NULL;
push(head,1);
push(head,2);
push(head,3);
append(head,4);
after(head,5,2);
show(head);
cout<<endl;

dele(head,head->next);
dele(head,head->next->next);
show(head);   
cout<<endl;
reverse(head);
show(head);
}