#include<bits/stdc++.h>
using namespace std;
struct node{
public:
    int data;
    node *next;
};
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
    head->data=2;
    head->next=middle;
    middle->data=3;
    middle->next=end;
    end->data=4;
    end->next=NULL;
    disp(head);
}