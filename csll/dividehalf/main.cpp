#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void push(node *&head,int new_data)
{
    node *new_node=new node;
    new_node->data=new_data;
    new_node->next=head;
    node *temp=head;
    if(head!=NULL)
    {
        while(temp->next!=head)
            temp=temp->next;
        temp->next=new_node;    
    }
    else{
        new_node->next=new_node;
    }
    head=new_node;
    
}
void show(node *head)
{
    node *temp=head;
    if(head!=NULL)
    {
        do{
            cout<<head->data<<" ";
            head=head->next;
        }while(head!=temp);
    }
}
void splitlist(node *head,node *&head1,node *&head2)
{

    head1=head;
    node *sptr=head,*fptr=head;
    while(fptr->next!=head && fptr->next->next!=head)
    {
        sptr=sptr->next;
        fptr=fptr->next->next;
    }
    if(fptr->next!=head && fptr->next->next==head)
    {
        fptr=fptr->next;
        
    }
    head2=sptr->next;
    sptr->next=head1;
    fptr->next=head2;
    
}
int main()
{
    node *head=NULL,*head1=NULL,*head2=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,4);
    push(head,5);
    show(head);
    splitlist(head,head1,head2);
    cout<<endl;
    show(head1);
    cout<<endl;
    show(head2);
}