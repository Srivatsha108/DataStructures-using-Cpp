int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int l1=0,l2=0;
    Node *t1=head1,*t2=head2;
    while(t1!=NULL)
    {
        l1++;
        t1=t1->next;
    }
     while(t2!=NULL)
    {
        l2++;
        t2=t2->next;
    }
    if(l1-l2>0)
    {
        for(int i=0;i<l1-l2;i++)
        head1=head1->next;
    }
    if(l1-l2<0)
    {
        for(int j=0;j<l2-l1;j++)
        head2=head2->next;
    }
    while(head2!=NULL && head1!=NULL)
    {
     if(head1->next==head2->next)
     return head2->next->data;
     head1=head1->next;
     head2=head2->next;
    }
    return -1;
}