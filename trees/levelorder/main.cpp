#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *left,*right;
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
void levelorder(node *root)
{
    if(root==NULL)
        return;
    queue<node*>q;
    q.push(root);
    node *temp=NULL;
    while(!q.empty())
    {
        temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
            q.push(temp->right);
    }
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
    levelorder(root);
}
