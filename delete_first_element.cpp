// Problem: Delete the first element from an array.
// Input:
//   n - size of array (1 ≤ n ≤ 20)
//   n space-separated integers (–100 ≤ element ≤ 100)
// Output:
//   - Array after removing the first element
// Sample:
//   Input: 5\n1 2 3 4 5
//   Output: 2 3 4 5


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
        if(i==0){
            continue;
        }
        cout<<arr[i]<<" ";
    }
}
