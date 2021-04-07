#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void push(node *&last,int new_data)
{
    node *new_node=new node;
    new_node->data=new_data;
    if(last!=NULL)
    {
        new_node->next=last->next;
        last->next=new_node;
   
    }
    else{
        last=new_node;
        last->next=last;
        
    }
    
    
}
void insert(node *last,int data)
{
    node *temp=last->next;
    node *ptr=new node;
    ptr->data=data;
    if(data<temp->data)
    {
        ptr->next=last->next;
        last->next=ptr; 
    }
    else{
        while(temp->data<data && temp->next->data<data)
        {
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
}
void show(node *last)
{
    node *temp=last->next;
    if(last!=NULL)
    {
        
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=last->next);
    }
}
void swap(node *last)
{
    node *temp=last->next;
    while(temp->next->next!=last->next)
    temp=temp->next;
    node *first=last->next;
    temp->next=last->next;
    last->next=first->next;
    first->next=last;
    last=first;
}
int main()
{
    node *last=NULL;
    push(last,13);
    push(last,9);
    push(last,5);
    push(last,1);
    show(last);
    cout<<endl;
    swap(last);
    show(last);
}