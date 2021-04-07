//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n,p;
//        cin>>n;
//        vector<int> a;
//        for(int i=0;i<n;i++)
//        {
//         cin>>p;   
//        a.push_back(p);
//        }
//        
//        int k;
//        cin>>k;
//        sort(a.begin(),a.end());
//        cout<<a[k-1]<<endl;
//    }
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        int k;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            a.push_back(k);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    swap(a[i],a[j]);
            }
        }
    
       
        cin>>k;
        cout<<a[k-1]<<endl;
    }
}