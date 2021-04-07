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
pair<int,int>s(node*root)
{
    if(root==NULL)
    {
        pair<int,int>sum(0,0);
        return sum;
    }
    pair<int,int>sum1=s(root->left);
    pair<int,int>sum2=s(root->right);
    pair<int,int>sum;
    sum.first=sum1.second+sum2.second+root->data;
    sum.second=max(sum1.first,sum1.second)+max(sum2.first,sum2.second);
    return sum;
        
}
int res(node*root)
{
    pair<int,int>net;
    net=s(root);
    return max(net.first,net.second);
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
    cout<<res(root);
}