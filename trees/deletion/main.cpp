#include<bits/stdc++.h>
using namespace std;
class node{
public:
    node *left,*right;
    int data;
};
node *newnode(int key)
{
 node *temp=new node;
temp->data=key;
temp->left=temp->right=NULL;
return temp;   
}
void traverse(node *temp)
{
    if(!temp)
        return;
    traverse(temp->left);
cout<<temp->data<<" ";
traverse(temp->right);    
}
void del(node *root, node *lnode)
{
    queue<node *>q;
    q.push(root);
    node *temp;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp==lnode)
        {
            temp=NULL;
            delete lnode;
            return;
        }
        if(temp->right)
        {
            if(temp->right==lnode)
            {
                temp->right=NULL;
                delete lnode;
                return;
            }
            else
                q.push(temp->right);
        }
        if(temp->left)
        {
            if(temp->left==lnode)
            {
                temp->left=NULL;
                delete lnode;
                return;
            }
            else
                q.push(temp->left);
        }
    }
}
node *deletion(node *root,int key)
{
    if(root==NULL)
    {
        return NULL;    
    }
    if(root->left==NULL && root->right==NULL)
    {
        if(root->data==key)
            return NULL;
        return root;
    }
    queue<node *>q;
    q.push(root);
    node *temp,*key_node=NULL;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp->data==key)
            key_node=temp;
        if(temp->left)
        {
            q.push(temp->left);
        }    
        if(temp->right)
            q.push(temp->right);
            
        
    }
    if(key_node!=NULL)
    {
        key_node->data=temp->data;
        del(root,temp);
    }
    return root;
} 
int main()
{
     node* root =newnode(10); 
    root->left = newnode(11); 
    root->left->left = newnode(7); 
    root->left->right = newnode(12); 
    root->right = newnode(9); 
    root->right->left = newnode(15); 
    root->right->right = newnode(8); 
  
    cout << "Inorder traversal before deletion : "; 
    traverse(root); 
  
    int key = 11; 
    root = deletion(root, key); 
  
    cout << endl; 
    cout << "Inorder traversal after deletion : "; 
    traverse(root); 
  
    return 0; 
}
