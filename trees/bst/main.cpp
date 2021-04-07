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

void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);    
}
node *search(node *root,int key)
{
    if(root->data==key || root==NULL)
    {
        cout<<key<<" found";
        return root;
    }
    if(root->data<key)
        return search(root->right,key);
    return search(root->left,key);
}
node* insert(node *root,int key)
{
    if(root==NULL)
    {
        return new node(key);
    }
        
    if(key<root->data)
           root->left=insert(root->left,key);
    else if(key>root->data)
        root->right=insert(root->right,key);
    return root;    
}
int main()
{
   node *root=new node(50);
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
   
    // print inoder traversal of the BST 
    inorder(root); 
    search(root,20);
    
}