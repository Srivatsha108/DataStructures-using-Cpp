#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void insert_after(node *prev_node,int data)
{
    if(prev_node==NULL)
    {
        cout<<"insertion not possible";
        return;
    }
    else
    {
        node *new_node=new node();
        new_node->data=data;
        new_node->next=prev_node->next;
        prev_node->next=new_node;
    }    
}
void show(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data;
        n=n->next;
    }
}
int main()
{
    node *head=new node();
    node *first=new node();
    node *second=new node();
    head->data=1;
    head->next=first;
    first->data=2;
    first->next=second;
    second->data=3;
    second->next=NULL;
    insert_after(first,4);
    show(head);
}