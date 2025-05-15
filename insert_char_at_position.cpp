// Problem: Insert a character at a given position in a character array.
// Input:
//   n - size of the array (1 ≤ n ≤ 15)
//   n space-separated characters
//   m - 0-based position (m < n)
//   ch - character to insert
// Output:
//   - Updated array after inserting ch at position m
// Sample:
//   Input: 5\na b c d e\n2\nX
//   Output: a b X c d e


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
    int pos;
    cin>>pos;
    char value;
    cin>>value;
    
    for(int i=n;i>=pos;i--){
        ch[i]=ch[i-1];
    }
    ch[pos]=value;
    for(int i=0;i<=n;i++){
        cout<<ch[i]<<" ";
    }
    
    
}
