Node *removeDuplicates(Node *root)
{
 // your code goes here
 Node *t2=root;
 while(root!=NULL && root->next!=NULL)
 {
     if(root->next->data==root->data)
     root->next=root->next->next;
     else
     root=root->next;
 }
 return t2;
 
}