// Problem: Merge Two Arrays by Element-wise Addition
// Company Tag: TCS
//
// Rajesh wants to add corresponding elements of two arrays.
// If arrays are of unequal length, keep the remaining elements of the longer array as is.
//
// Input:
//   - n1: Size of first array
//   - n1 space-separated integers
//   - n2: Size of second array
//   - n2 space-separated integers
//
// Output:
//   - A single line with the merged array after element-wise addition.
//     Elements should be separated by a space.
//
// Constraints:
//   1 ≤ n1, n2 ≤ 200
//   1 ≤ array elements ≤ 200
//
// Sample Input 1:
//   5
//   2 5 7 44 890
//   3
//   456 3 4
// Sample Output 1:
//   458 8 11 44 890
//
// Sample Input 2:
//   7
//   23 40 120 70 100 150 220
//   4
//   40 5 10 18
// Sample Output 2:
//   63 45 130 88 100 150 220



// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    int maxSize=max(n,m);
    for(int i=0;i<maxSize;i++){
        int val1;
        if(i<n){
            val1=arr[i];
        }
        else{
            val1=0;
        }
        
        int val2;
        if(i<m){
            val2=arr2[i];
        }
        else{
            val2=0;
        }
        cout<<val1+val2<<" ";
        
    }
    
    return 0;
}


