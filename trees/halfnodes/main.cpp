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
void postorder(node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";    
}
node *removehalf(node *root)
{
    if(root==NULL)
   return NULL;
   root->left=removehalf(root->left);
   root->right=removehalf(root->right);
   if(root->left==NULL && root->right==NULL)
   return root;
   if(root->left==NULL)
   {
       struct node*temp=root->right;
       delete root;
       return temp;
   }
   if(root->right==NULL)
   {
       struct node*temp=root->left;
       delete root;
       return temp;
   }
   return root;
}
int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
//    root->left->right=new node(5);
//    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<endl<<"original tree"<<endl;
    postorder(root);
    cout<<endl<<"after change"<<endl;
    removehalf(root);
    postorder(root);
    
    
}