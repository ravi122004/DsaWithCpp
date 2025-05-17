// Problem: Filter out negative prices from a list.
// Input:
//   n - number of product prices (1 ≤ n ≤ 20)
//   n space-separated double values (range: -100.0 to 100.0)
// Output:
//   Space-separated non-negative prices
// Sample:
//   Input: 5\n10.5 -5.2 8.7 -3.9 12.3
//   Output: 10.5 8.7 12.3



// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        if(arr[i]==0){
            cout<<"0.0 ";
        }
        else if(arr[i]>0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
