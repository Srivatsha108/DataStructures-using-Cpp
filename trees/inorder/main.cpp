#include<bits/stdc++.h>
using namespace std;
class node{
public:
node *left,*right;
int data;
node(int x)
{
    data=x;
    left=NULL,right=NULL;
    
}
};
void insert(node *temp,int key)
{
    queue<node*>q;
    q.push(temp);
    while(!q.empty())
    {
        node *k=q.front();
        q.pop();
        if(!k->left)
        {
            k->left=new node(key);
            break;
        }
        else
            q.push(k->left);
        if(!k->right)
        {
            k->right=new node(key);
            break;
        }    
        else
            q.push(k->right);
    }
}
void traverse(node *temp)
{
    if(!temp)
        return;
    traverse(temp->left);
cout<<temp->data<<" ";
traverse(temp->right);    
}
int main()
{
    node* root = new node(10); 
    root->left = new node(11); 
    root->left->left = new node(7); 
    root->right = new node(9); 
    root->right->left = new node(15); 
    root->right->right = new node(8); 
  
    cout << "Inorder traversal before insertion:"; 
    traverse(root); 
  
    int key = 12; 
    insert(root, key); 
  
    cout << endl; 
    cout << "Inorder traversal after insertion:"; 
    traverse(root); 
  
    return 0; 
}