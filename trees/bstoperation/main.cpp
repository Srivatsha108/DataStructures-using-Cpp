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
node* insert(node *root,int key)
{
    if(root==NULL)
        return new node(key);
    if(key<root->data)
           root->left=insert(root->left,key);
    else if(key>root->data)
        root->right=insert(root->right,key);
     return root;   
}
node* search(node *root,int key)
{
    if(root->data==key || root==NULL)
        return root;
     else if(key>root->data)
return search(root->right,key);

return search(root->left,key);
  
}
void show(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
show(root->left);
show(root->right);    
}
int main()
{
    node *root=NULL;
    root=insert(root,7);
    insert(root,6);
    insert(root,9);
    insert(root,5);
    insert(root,8);
    insert(root,10);
//    insert(root,1);
    show(root);
}