#include<bits/stdc++.h>
using namespace std;
class Hash
{
    
    int bucket;//size of bucket.
    list<int>*table;//pointer to array containing buckets.
    public:
    Hash(int size);
    void insert(int v);
    void remove(int key);
    void display();
};
Hash::Hash(int size)
{
    this->bucket=size;
    table=new list<int>[size];
}
void Hash::insert(int val)
{
    int ind=val%bucket;
    table[ind].push_back(val);
} 
void Hash::remove(int key)
{
    int ind=key%bucket;
    list<int>::iterator it;
    for(it=table[ind].begin();it!=table[ind].end();it++)
    {
        if(*it==key)
            break;
    }
    if(it!=table[ind].end())
        table[ind].erase(it);
}
void Hash::display()
{
    for(int i=0;i<bucket;i++)
    {
        cout<<i;
        for(auto x:table[i])
            cout<<"-->"<<x;
            cout<<endl;
    }
} 
int main() 
{ 
  // array that contains keys to be mapped 
  int a[] = {15, 11, 27, 8, 12}; 
  int n = sizeof(a)/sizeof(a[0]); 
  
  // insert the keys into the hash table 
  Hash h(7);   // 7 is count of buckets in 
               // hash table 
  for (int i = 0; i < n; i++)  
    h.insert(a[i]);   
  
  // delete 12 from hash table 
  h.remove(12); 
  
  // display the Hash table 
  h.display(); 
  
  return 0; 
} 