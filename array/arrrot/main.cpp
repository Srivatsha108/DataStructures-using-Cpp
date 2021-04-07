//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int i,ele;
//    int a[5]={5,4,3,2,1};
//    cin>>ele;
//    sort(a,a+5);
//    int l=0,r=4;
//    while(l<r)
//    {
//        if(a[l]+a[r]==ele)
//            cout<<a[l]<<" "<<a[r];
//        else if(a[l]+a[r]<ele)
//              l++;
//        else
//               r--;      
//    
//    }
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    vector <int> a;
//    int i;
//    for(i=0;i<5;i++)
//        a.push_back(i+1);
//    sort(a.begin(),a.end());
//    for(auto j:a)
//        cout<<j<<" ";
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int k,j;
cin>>k;
for(i=0;i<k;i++)
{
    int temp=a[n-1];
    for(j=n-1;j>=1;j--)
        a[j]=a[j-1];
     a[0]=temp;   
}    
for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}