#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void push(node **head,int new_data)
{
    node *new_node=new node();
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;
    
}
//void end(node *head,int n)
//{
//    int c=0;
//    node *temp=head;
//    while(temp!=NULL)
//    {
//        temp=temp->next;
//        c++;
//    }
//    if(c<n)
//        return;
//     temp=head;   
//    for(int i=1;i<c-n+1;i++)   
//        temp=temp->next;
// 
//    cout<<temp->data;    
//}
void end(node *head,int n)
{
    node *temp1=head,*temp2=head;
    int c=0;
    while(temp1!=NULL && c<n)
    {
        temp1=temp1->next;
        c++;
    }
    while(temp1!=NULL)
    {
        temp2=temp2->next;
        temp1=temp1->next;
    }
    cout<<temp2->data;
}
int main() 
{ 
    /* Start with the empty list */
   node *head=NULL;
  
    // create linked 35->15->4->20 
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 35); 
  
    end(head, 2); 
    return 0; 
} 