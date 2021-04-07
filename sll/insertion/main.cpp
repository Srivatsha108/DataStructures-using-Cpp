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
void disp(node *n)
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
    node *middle=new node();
    node *end=new node();
    head->data=1;
    head->next=middle;
    middle->data=2;
    middle->next=end;
    end->data=3;
    end->next=NULL;
    push(&head,4);
    disp(head);
    
}