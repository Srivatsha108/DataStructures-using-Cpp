//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,c=0;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]!=0)
//        {
//            a[c]=a[i];
//            c++;
//        }
//    }
//    while(c<n)
//    {
//        a[c]=0;
//        c++;
//    }
//    for(auto i:a)
//        cout<<i<<" ";
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,c=0;
//    cin>>n;
//    vector<int>a;
//    vector<int>b;
//    for(int i=0;i<n;i++)
//    {
//        int p;
//        cin>>p;
//        a.push_back(p);
//        if(p==0)
//            c++;
//        else
//          b.push_back(p);    
//        
//    }
//    for(int i=0;i<c;i++)
//        b.push_back(0);
//    for(auto j:b)
//        cout<<j<<" ";
        
//}
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[c],a[i]);
            c++;
        }
    }    
    for(auto i:a)
        cout<<i<<" ";
}




//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    list<int>a;
//    vector<int>b {1,2,3,4,5};
//    remove(b.begin(),b.end(),1);
//    for(int i=0;i<n;i++)
//    {
//        int k;
//        cin>>k;
//    a.push_back(k);
//    }
//    //int c=a.count(0);
//    int c=count(a.begin(),a.end(),0);
//    a.remove(0);
//    //remove(a.begin(),a.end(),2);
//    for(int i=0;i<c;i++)
//    a.push_back(0);
//    for(auto i:a)
//    cout<<i<<" ";
//}