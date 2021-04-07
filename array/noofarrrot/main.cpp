//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    int s=1,j=0;
//while(a[j]<=a[j+1] and j!=n-1)
//{
//    s+=1;
//    j++;
//}    
//if(s==n)
//    cout<<0;
//else    
//cout<<s;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    int min=a[0],s=1;
//    for(int i=0;i<n;i++)
//    {
//        int e=a[i];
//        if(e>min)
//        {
//            min=e;
//            s++;
//        }
//    }    
//    cout<<s;
//}
// C++ program to find number of rotations 
// in a sorted and rotated array. 
#include<bits/stdc++.h> 
using namespace std; 

// Returns count of rotations for an array which 
// is first sorted in ascending order, then rotated 
int countRotations(int arr[], int n) 
{ 
	// We basically find index of minimum 
	// element 
	int min = arr[0], min_index; 
	for (int i=0; i<n; i++) 
	{ 
		if (min > arr[i]) 
		{ 
			min = arr[i]; 
			min_index = i; 
		} 
	} 
	return min_index; 
} 

// Driver code 
int main() 
{ 
	int arr[] = {15, 18, 2, 3, 6, 12}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << countRotations(arr, n); 
	return 0; 
} 
