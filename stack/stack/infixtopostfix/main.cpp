#include<bits/stdc++.h>
using namespace std;
int check(char a)
{
   if(a=='^')
   return 3;
   else if(a=='*' || a=='/')
   return 2;
   else if(a=='+' || a=='-')
   return 1;
   else 
   return -1;
}
string post(string str)
{
    stack<char>s;
    s.push('N');
    string op;
    for(int i=0;i<s.size();i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        op+=str[i];
        else if(str[i]=='(')
        s.push('(');
        else if(str[i]==')')
        {
            while(s.top()!='N' && s.top()!='(')
            {
                char c=s.top();
                s.pop();
               op+=c;
                
                
            }
            if(s.top()=='(')
            {
                char c=s.top();
            s.pop();
            }
        }
        else
        {
            if(s.top()=='(')
            {
            s.push(str[i]);
            continue;
            }
           while(s.top()!='N' && check(str[i])<=check(s.top()))
           {
               char c=s.top();
               s.pop();
               op+=c;
               s.pop();
           }
           s.push(str[i]);
        }
        
        
    }
    while(s.top()!='N')
        {
            char c=s.top();
            s.pop();
            op+=c;
            
        }
    return op;
    
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        cout<<post(str)<<endl;
    }
    
}