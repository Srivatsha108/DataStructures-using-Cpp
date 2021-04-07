void deleteAlt(struct Node *head){
    // Code here
    Node *temp=NULL;
    while(head!=NULL && head->next!=NULL)
    {
        temp=head->next;
        head->next=temp->next;
        delete temp;
        head=head->next;
    }
    
    
}
