// Problem: Find the second-lowest score from a list of integers.
// Input: 
//   First line - integer n (1 ≤ n ≤ 20), number of scores
//   Second line - n space-separated integers (1 ≤ score ≤ 1000)
// Output: 
//   Print the second-lowest score
// Sample:
//   Input: 5 \n 4 2 7 1 3
//   Output: 2


// You are using GCC
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int smallest=INT_MAX;
    int secondsmallest=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        
        if(arr[i]>smallest && arr[i]<secondsmallest){
            secondsmallest=arr[i];
        }
    }
    cout<<secondsmallest;
}
