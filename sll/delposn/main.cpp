#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void del_posn(node *head,int pos)
{
    int i=0;
    node *temp=new node();
    while(i!=pos)
    {
        temp=head;
        head=head->next;
        i++;
    }
    node *t2=head;
    temp->next=head->next;
    delete t2;
}
void print(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
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
    del_posn(head,1);
    print(head);
}