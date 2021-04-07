#include<bits/stdc++.h>
using namespace std;
class graph{
     list<int>*l;
     int v;
public:
     graph(int s);
     void add(int u,int v);
     void dfs(int i);
     void calc(int x,bool visited[]);
};
graph::graph(int s)
{
    v=s;
    l=new list<int>[v];
} 
void graph::add(int u,int v)
{
    l[u].push_back(v);
}
void graph::calc(int x,bool visited[])
{
    visited[x]=true;
    cout<<x<<" ";
    for(auto i=l[x].begin();i!=l[x].end();i++)
    {
        if(!visited[*i])
            calc(*i,visited);
    }
}
void graph::dfs(int x)
{
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    calc(x,visited);    
}

int main()
{
   graph g(4); 
    g.add(0, 1); 
    g.add(0, 2); 
    g.add(1, 2); 
    g.add(2, 0); 
    g.add(2, 3); 
    g.add(3, 3); 
  
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n"; 
    g.dfs(2); 
  
    return 0;  
}