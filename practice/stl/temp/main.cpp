#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,p,sum=0;
        cin>>n>>x;
        int minn=-1,maxx=-1;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            if(minn==-1 && p%x!=0)
                  minn=i;
            if(p%x!=0)
                maxx=i;
            sum+=p;    
        }
        if(sum%x!=0)
            cout<<n<<endl;
        else if(minn==-1)
cout<<-1<<endl;
else
cout<<max(n-minn-1,maxx+1)<<endl;    
    }
    
}