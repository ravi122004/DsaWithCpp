// Problem: Calculate the sum of elements in an array.
// Input:
//   N - number of elements (1 ≤ N ≤ 20)
//   N space-separated integers (-100 ≤ element ≤ 100)
// Output:
//   - Sum of all array elements
// Sample:
//   Input: 5\n1 2 3 4 5
//   Output: 15



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
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
    }
    cout<<sum;
}
