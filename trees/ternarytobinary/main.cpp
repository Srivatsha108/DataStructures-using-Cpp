Node *calc(string str,int start,int end)
{
    Node *root=NULL;
    if(start<end)
    {
        root=new Node(str[start]);
        root->right=new Node(str[end]);
        root->left=calc(str,start+2,end-2);
    }
    if(start==end)
    {
    root=new Node(str[start]);
    }
    return root;
}
Node *convertExpression(string str,int i)
{
//add code here.
Node *root=calc(str,0,str.length()-1);
return root;

}