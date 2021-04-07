Node *temp=head,*prev=head;
       
       while(temp->next!=NULL)
       {
           prev=temp;
       temp=temp->next;
       
       }
       if(temp->data==9)
       {
       temp->data=0;
       prev->data+=1;
       }
       else
       {
           temp->data+=1;
       }
  
   return head;
}