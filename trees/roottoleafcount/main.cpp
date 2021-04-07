//bool hasPathSum(Node *node, int sum) {
//    // Your code here
//    if(node==NULL || sum==0)
//    return 0;
//    if(!node->left && !node->right)
//    return sum-node->data==0;
//    return hasPathSum(node->left,sum-node->data) || hasPathSum(node->right,sum-node->data);
//    
//}

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
void count(node *root,map<int,int>&m,int d)
{
    if(root==NULL)
        return;
    if(root->left==NULL && root->right==NULL)
m[d]++;
count(root->left,m,d+1);
count(root->right,m,d+1);    
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
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    show(root);
    map<int,int>m;
    count(root,m,1);
    for(auto i=m.begin();i!=m.end();i++)
        cout<<i->first<<" "<<i->second<<"$";
        cout<<endl;
    
}