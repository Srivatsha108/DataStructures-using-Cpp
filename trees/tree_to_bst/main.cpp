#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int j=0;
struct node{
    int data;
    node *left,*right;
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
void show(node *root)
{
    if(root==NULL)
        return;
    show(root->left);
cout<<root->data<<" ";
    show(root->right);    
}
void calc(node *root)
{
    if(root==NULL)
        return;
    calc(root->left);
    a.push_back(root->data);
    calc(root->right);    
}
void res(node *root)
{
    if(root==NULL)
        return;
    res(root->left);
    root->data=a[j++];
    res(root->right);    
}
int main()
{
 node *root=new node(1);
 root->left=new node(2);
 root->right=new node(3);
 calc(root);
 sort(a.begin(),a.end());
 res(root);
 show(root);
 
}


