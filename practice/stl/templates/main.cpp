#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        long long h,c,t;
        cin>>h>>c>>t;
        if(h==t)
        cout<<1<<endl;
        else if((h+c)/2>=t)
        cout<<2<<endl;
        else
        {
          long int k=(h-t)/(2*t-h-c);
          double p=((k+1)*h+k*c)/((double)(2*k+1));
          double q=((k+2)*h+(k+1)*c)/((double)(2*k+3));
          if(abs(t-p)<=abs(t-q))
          cout<<2*k+1<<endl;
          else
          cout<<2*k+3<<endl;
          
        }
    }
}