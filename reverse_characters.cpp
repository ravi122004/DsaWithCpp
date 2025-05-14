// Problem: Reverse the order of characters in an array.
// Input:
//   n - size of the array (1 ≤ n ≤ 20)
//   n space-separated characters (any printable ASCII characters)
// Output:
//   - The characters in the array after reversing the order
// Sample:
//   Input: 4\nA B C D
//   Output: D C B A


// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<ch[i]<<" ";
    }
}

