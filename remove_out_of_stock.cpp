// Problem: Remove out-of-stock products (0s) from an inventory array.
// Input:
//   n - number of products (1 ≤ n ≤ 25)
//   n space-separated integers (0 ≤ product ID ≤ 50)
// Output:
//   - Remaining product IDs in order, excluding 0s
// Sample:
//   Input: 6\n1 2 3 4 0 5
//   Output: 1 2 3 4 5

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
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            continue;
        }
        cout<<arr[i]<<" ";
        
    }
}
