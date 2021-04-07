#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node *left,*right;
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
    
};
void dll(node *root,node *&head)
{
    static node *prev=NULL;
    if(root==NULL)
    return;
    
    dll(root->left,head);
    if(prev==NULL)
    head=root;
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    dll(root->right,head);
}
void show(node *root)
{
    if(root==NULL)
        return;
    show(root->left);
    cout<<root->data<<" ";
    show(root->right);
}
int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    show(root);
    cout<<endl;
    node *head=NULL;
    dll(root,head);
    node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->right;
    }
    cout<<endl;
    
}