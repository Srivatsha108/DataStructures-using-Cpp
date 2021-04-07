#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
        
    a.sort();
    for(auto i:a)
cout<<i<<" ";    
}