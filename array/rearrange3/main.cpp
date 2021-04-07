//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    vector<int> a;
//    int n;
//    cin>>n;
//    int k;
//    for(int i=0;i<n;i++)
//    {
//        cin>>k;
//        a.push_back(k);
//    }
//    sort(a.begin(),a.end());
//    int j=0,p=n-1;
//   
//    while(j<=p)
//    {
//       if(j==p)
//       {
//           cout<<a[j]<<" ";
//           j++;
//           p--;
//       }
//           else{
//        cout<<a[j]<<" "<<a[p]<<" ";
//        j++;
//        p--;
//           }
//           
//    }
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i,j;
for(i=0;i<n-1;i++)
{
    for(j=i;j<n;j++)
    {
        if(a[i]>a[j])
            swap(a[i],a[j]);
    }
}  
for(auto i:a)
cout<<i<<" ";  
}