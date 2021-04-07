#include<bits/stdc++.h>
using namespace std;
vector<int>largest(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        if(pq.size()==k)
        {
            if(pq.top()<arr[i])
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        else{
            pq.push(arr[i]);
        }
    }
    vector<int>k1;
    while(!pq.empty())
    {
        k1.push_back(pq.top());
        pq.pop();
    }
    reverse(k1.begin(),k1.end());
    return k1;
}
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;  
    vector<int>res;
    res=largest(arr,n,k);
    for(auto i:res)
        cout<<i<<" ";
}