#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int k;
		cin>>k;
		int a[k][k];
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<k;j++)
			cin>>a[i][j];
		}
		int s=0;
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<k;j++)
			{
				for(int p=i;p<k;p++)
				{
					for(int q=j;q<k;q++)
					{
						if(a[i][j]>a[p][q])
						s+=1;
					}

				}
			}
		}
		cout<<s<<endl;
	}
}