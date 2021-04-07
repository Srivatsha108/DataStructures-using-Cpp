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

void inorder(node *root,vector<node*>&v)
{
    if(root==NULL)
        return;
    inorder(root->left,v);
    v.push_back(root);
    inorder(root->right,v);    
}
void preorder(node *root)
{
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
node *bst(vector<node*>v,int start,int end)
{
    if(start>end)
        return NULL;
    int mid=(start+end)/2;    
    node *temp=v[mid];
    temp->left=bst(v,start,mid-1);
    temp->right=bst(v,mid+1,end);
    return temp;    
}
int main()
{
    node* root = new node(10); 
    root->left = new node(8); 
    root->left->left = new node(7); 
    root->left->left->left = new node(6); 
    root->left->left->left->left = new node(5); 
    vector<node *>v;
    inorder(root,v); 
    root=bst(v,0,v.size()-1);
  
    printf("Preorder traversal of balanced "
            "BST is : \n"); 
    preorder(root); 
  
    return 0; 
}