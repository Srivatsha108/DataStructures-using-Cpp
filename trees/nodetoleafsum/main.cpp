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
bool hassum(node *root,int sum)
{
    if(root==NULL || sum==0)
        return 0;
    if(root->left==NULL && root->right==NULL)
return sum-root->data==0;
return hassum(root->left,sum-root->data) || hassum(root->right,sum-root->data);    
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
    int sum;
    cout<<"enter sum"<<endl;
    cin>>sum;
    if(hassum(root,sum))
        cout<<"present"<<endl;
    else
cout<<"not present"<<endl;    
}