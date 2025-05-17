// Problem: Find common elements between two datasets (arrays)
// Input:
//   n - number of elements in the first dataset
//   n integers - elements of the first dataset
//   m - number of elements in the second dataset
//   m integers - elements of the second dataset
// Output:
//   Print "Common Elements: " followed by the common elements (in the order they appear in the first dataset)
//   If there are no common elements, print "Common Elements: None"
// Constraints:
//   1 ≤ n, m ≤ 20
//   -100 ≤ dataset elements ≤ 100
// Example:
//   Input:
//     4
//     1 2 3 4
//     3
//     3 4 5
//   Output:
//     Common Elements: 3 4



// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int n;
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    bool found=false;
    cout<<"Common Elements: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                found =true;
                break;
            }
            
        }
    }
    if(!found){
        cout<<"none";
    }
    
    
    
    
}
