#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void delwhole(node *head)
{
   node *temp2=head;
    node *temp;
    while(temp2!=NULL)
    {
        temp=temp2->next;
        delete temp2;
        temp2=temp;
            
    }
}
void show(node *n)
{
    if(n==NULL)
    {
        cout<<"empty";
        return;
    }
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
    delwhole(head);
    show(head);
}