
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
    int element(node *head,int ind)
    {
        node *current=head;
        int c=0;
        while(current!=NULL)
        {
            if(c==ind)
                return(current->data);
            c++;
            current=current->next;    
        }
        assert(0);
    }
    int main()
    {
        node *head=NULL;
        push(&head,1);
        push(&head,2);
        push(&head,3);
       cout<<"element at index 3 is "<<element(head,2);
       return 0;
    }