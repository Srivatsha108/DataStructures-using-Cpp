// { Driver Code Starts
//#include <bits/stdc++.h>
//using namespace std;
//
//int transitionPoint(int arr[], int n);
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        int a[n], i;
//        for (i = 0; i < n; i++) {
//            cin >> a[i];
//        }
//        cout << transitionPoint(a, n) << endl;
//    }
//    return 0;
//} } Driver Code Ends
//
//
//
//// Function to find the transition point
//int transitionPoint(int arr[], int n) {
//    // code here
//
//    int i;
//    if(sizeof(arr)/sizeof(int)==1 && arr[0]==1)
//    return 0;
//    for(i=0;i<n-1;i++)
//    {
//        if(arr[i]==0 && arr[i+1]==1)
//        return i+1;
//    }
//    
//    
//    return -1;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1]={1};
    if(sizeof(a)/sizeof(int)==1 && a[0]==1)
        cout<<"yes";
}