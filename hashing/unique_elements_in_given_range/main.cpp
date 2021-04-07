#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        // Write Your Code here
        vector<int>res;
        for(int i=L;i<=R;i++)
        {
            vector<int>arr(10,-1);
            int p=i;
            while(p>0)
            {
                int k=p%10;
                if(arr[k]==-1)
                arr[k]=0;
                else
                break;
                
                p=p/10;
                
                
            }
            if(p==0)
            res.push_back(i);
            
        }
        return res;
    }
};
int main()
{
    Solution s;
    vector<int>res=s.uniqueNumbers(10,20);
    for(auto i:res)
        cout<<i<<" ";
}