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
void diff(node *root)
{
    int k=0,es=0,os=0;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        
        int size=q.size();
        while(size!=0)
        {
            node *temp=q.front();
        q.pop();
            if(k%2==0)
            es+=temp->data;
        else 
            os+=temp->data;
          
        if(temp->left)
              q.push(temp->left);
        if(temp->right)
              q.push(temp->right); 
        size--;      
        }
          k++; 
    }
  cout<<endl<<es-os;  
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
    diff(root);
}