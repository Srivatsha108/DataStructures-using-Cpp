bool fold(Node *l,Node *r)
{
    if(l==NULL && r==NULL)
    return true;
    return(fold(l->left,r->right)&fold(l->right,r->left));
    return false;
}
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root==NULL)
    return true;
    return fold(root->left,root->right);
}