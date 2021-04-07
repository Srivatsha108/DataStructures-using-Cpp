void convert(Node *head, TreeNode *&root) {
    // Your code here
    vector<TreeNode *>v;
    while(head!=NULL)
    {
        TreeNode *temp=new TreeNode(head->data);
        v.push_back(temp);
        head=head->next;
    }
    for(int i=0;i<v.size()/2;i++)
    {
        if(2*i+1<v.size())
        v[i]->left=v[2*i+1];
        if(2*i+2<v.size())
        v[i]->right=v[2*i+2];
    }
   root=v[0];
}