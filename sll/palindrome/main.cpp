#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *ptr;
};
bool check(node *head)
{
    node *temp=head;
    stack<int>s;
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp=temp->ptr;
    }
    while(head!=NULL)
    {
        int i=s.top();
        s.pop();
        if(i!=head->data)
            return false;
        head=head->ptr;    
    }
    return true;
    
}
void push(node **head_ref,int new_data)
{
    node *temp=new node;
    temp->data=new_data;
    temp->ptr=*head_ref;
    *head_ref=temp;
}
void disp(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->ptr;
    }
}
int main()
{
    node *head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,1);
    disp(head);
    check(head)==true?cout<<"Palindrome":cout<<"not palindrome";
}