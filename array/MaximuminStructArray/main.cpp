/*Given a struct array of type Height, having two elements feet and inches. Find the maximum height, where height is calculated sum of feet and inches after converting feet into inches.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<=2*n-1;i+=2)
        {
            int s=a[i]*12+a[i+1];
            if(s>sum)
                sum=s;
        } 
      cout<<sum<<endl;       
    }

}