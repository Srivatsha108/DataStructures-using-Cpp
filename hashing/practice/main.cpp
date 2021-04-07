#include<bits/stdc++.h>
using namespace std;
class Matrix
{
    public:
    int r,c;
    vector<vector<int>> m;
    Matrix()
    {
      r=0;
      c=0;
    }
    void get_rows()
    {
        cin>>r;
    }
    void get_cols()
    {
        cin>>c;
    }
    void set_matrix()
    {
        m.resize(r);
        for(int i=0;i<r;i++)
        {
            m[i].resize(c,0);
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            cin>>m[i][j];
        }
    }
    void add_matrix(Matrix m2)
    {
        if(r!=m2.r || c!=m2.c )
        cout<<"Matrices cannot be added"<<endl;
        else
        {
            int res[r][c];
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                res[i][j]=m[i][j]+m2.m[i][j];
            }
            cout<<endl;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                cout<<res[i][j]<<" ";
                cout<<endl;
            }
        }
    }
    void multiply_matrix(Matrix m2)
    {
      if(c!=m2.r)
      cout<<"Matrices can't be multiplied"<<endl;
      else
      {
          int mul[r][m2.c];
          for(int i=0;i<r;i++)
          {
              for(int j=0;j<m2.c;j++)
              {
                  int sum=0;
                  for(int k=0;k<c;k++)
                  {
                      sum+=m[i][k]+m2.m[k][j];
                  }
                  mul[i][j]=sum;
              }
          }
          cout<<endl;
          for(int i=0;i<r;i++)
          {
              for(int j=0;j<m2.c;j++)
              cout<<mul[i][j]<<" ";
              cout<<endl;
          }
      }
    }
};
int main()
{
    Matrix m1,m2;
    m1.get_rows();
    m1.get_cols();
    m1.set_matrix();
    m2.get_rows();
    m2.get_cols();
    m2.set_matrix();
    m1.add_matrix(m2);
    m1.multiply_matrix(m2);
}