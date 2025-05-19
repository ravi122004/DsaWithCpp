// remove the last element from the array
// input:
// 3
// 1 2 3
// output:
// 1 2

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
        if(i==n-1){
            continue;
        }
        cout<<arr[i]<<" ";
    }
}
