//Given an ArrayList of N lowercase characters. The task is to count frequency of elements in the list.
//
//Note: use add() to append element in the list and contains() to check an element is present or not in the list and collections.frequency() to find the frequency of the element in the list.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    vector<int>l;
     int n;
     cin>>n;  
    for(int i=0;i<n;i++)
      {
        char ch,c;
        cin>>ch;
        if(ch=='i')
        {
            cin>>c;
            l.push_back(c);
            
        }
        if(ch=='f')
        {
            cin>>c;
            int k=count(l.begin(),l.end(),c);
            if(k==0)
                cout<<"Not Present";
            else
                cout<<k;    
        }
            
       }
              cout<<endl;
    }
}