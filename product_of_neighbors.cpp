// Problem: Replace each element with the product of its neighbours.
// First and last elements are multiplied with their single neighbor.
// Input:
//   n - size of array (1 ≤ n ≤ 20)
//   n space-separated integers (1 ≤ element ≤ 100)
// Output:
//   - Modified array after transformation
// Sample:
//   Input: 5\n2 3 4 5 6
//   Output: 6 8 15 24 30

// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int res[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            res[i]=arr[i]*arr[i+1];
        }
        else if(i==(n-1)){
            res[i]=arr[i]*arr[i-1];
        }
        else{
            res[i]=arr[i-1]*arr[i+1];
        }
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}
