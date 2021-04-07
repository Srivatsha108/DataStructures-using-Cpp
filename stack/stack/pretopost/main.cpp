#include<bits/stdc++.h>
using namespace std;
bool check(char s)
{
    switch(s)
    {
    case '+':
    case '-':
    case '*':
    case '/':
    case '^':
    case '%':
    return true;
    }
    return false;
}
void pretopost(string str)
{
    stack <string> s;
    for(int i=str.length()-1;i>=0;i--)
    {
        if(check(str[i]))
        {
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            string temp=op1+op2+str[i];
            s.push(temp);
        }
        else
            s.push(string(1,str[i]));
    }
    cout<<s.top();
}
int main()
{
    string pre_exp = "*-A/BC-/AKL"; 
    pretopost(pre_exp);
}