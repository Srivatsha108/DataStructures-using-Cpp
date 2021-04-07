#include<bits/stdc++.h>
using namespace std;
bool colsort(vector<int>&v1,vector<int>&v2)
{
return v1[1]<v2[1];
}
bool colsort2(vector<int>&v1,vector<int>&v2)
{
return v1[1]>v2[1];
}
bool colsort3(vector<int>v1,vector<int>v2)
{
return v1.size()<v2.size();
}
int main()
{
    cout<<"-----------------increasing order sort-------------------\n";
cout<<"basis of row\n";
    vector<vector<int>>a {{9,8,7},{1,2,3},{4,5,6}};
    for(int i=0;i<a.size();i++)
        sort(a[i].begin(),a[i].end());
    
for(int i=0;i<a.size();i++)
{
for(int j=0;j<a[i].size();j++)
{
    cout<<a[i][j]<<" ";
}
  cout<<endl;       
}
      
cout<<"basis of column\n"; 
sort(a.begin(),a.end(),colsort);
   for(int i=0;i<a.size();i++)
{
for(int j=0;j<a[i].size();j++)
{
    cout<<a[i][j]<<" ";
}
  cout<<endl;       
}
cout<<"-----------------decreasing order sort-------------------\n";
sort(a[0].rbegin(),a[0].rend());
for(int i=0;i<a.size();i++)
{
for(int j=0;j<a[i].size();j++)
{
    cout<<a[i][j]<<" ";
}
  cout<<endl;       
}
sort(a.begin(),a.end(),colsort2);
for(int i=0;i<a.size();i++)
{
for(int j=0;j<a[i].size();j++)
{
    cout<<a[i][j]<<" ";
}
  cout<<endl;       
}
cout<<"Sorting the 2D Vector on basis of no. of columns in row in ascending order.\n";
vector<vector<int>>b{{1,2},{3,4,5},{6,7,8,9}};
sort(b.begin(),b.end(),colsort3);
for(int i=0;i<b.size();i++)
{
for(int j=0;j<b[i].size();j++)
{
    cout<<b[i][j]<<" ";
}
  cout<<endl;       
}
cout<<"-------------initialising  2d vector through input--------------\n";
int r,c;
cin>>r>>c;
vector<vector<int>>v(r,vector<int>(c,-1));
for(int i=0;i<v.size();i++)
{
for(int j=0;j<v[i].size();j++)
{
    cout<<v[i][j]<<" ";
}
  cout<<endl;       
}
}