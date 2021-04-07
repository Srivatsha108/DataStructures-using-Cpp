#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
};
node *newnode(int data)
{
    node *temp=new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int main()
{
    node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    cout<<root->data<<endl<<root->left->data<<endl<<root->right->data;
}