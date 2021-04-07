//Given an unsorted array arr of size N, rearrange the elements of array such that number at the odd index is greater than the number at the previous even index. The task is to complete the function formatArray() which will return formatted array.
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i+=2)
    {
        if(a[i]<a[i-1])
            swap(a[i],a[i-1]);
    } 
for(auto i:a)
cout<<i<<" ";   
}