#include<bits/stdc++.h>
using namespace std;
char tree[10];
void root(char key)
{
    if(tree[0]!='\0')
        cout<<"already root present"<<endl;
    else
      tree[0]=key;
      
}
void left(char key,int parent)
{
    if(tree[parent]=='\0')
        cout<<"parent not found"<<endl;
    else
        tree[2*parent+1]=key;
}
void right(char key,int parent)
{
    if(tree[parent]=='\0')
        cout<<"parent not found"<<endl;
    else
        tree[2*parent+2]=key;
}
void print()
{
    for(int i=0;i<10;i++)
    {
        if(tree[i]!='\0')
            cout<<tree[i];
        else
cout<<"_";    
    }
}
int main()
{
    root('A'); 
    //insert_left('B',0); 
    right('C', 0); 
    left('D', 1); 
    right('E', 1); 
    right('F', 2); 
    print(); 
    return 0; 
}