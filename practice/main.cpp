#include<bits/stdc++.h>
using namespace std;
queue<int>q1,q2;
void push(int x)
{
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while(!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
    
}