int countPairs(struct Node* head1, struct Node* head2, int x) {
    // Code here
    int c=0;
    unordered_set<int>s;
    while(head1!=NULL)
    {
        s.insert(head1->data);
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        if(s.find(x- head2->data)!=s.end())
        c+=1;
        head2=head2->next;
    }
    return c;
}