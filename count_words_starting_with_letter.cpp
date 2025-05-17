// Problem: Count how many words start with a specific letter.
// Input:
//   n - number of words (1 ≤ n ≤ 15)
//   n lines of strings (each ≤ 100 characters)
//   1 character - the letter to check
// Output:
//   An integer - count of words that start with the given letter (case-sensitive)
// Example:
//   Input:
//     3
//     Bard
//     chatGPT
//     bard
//     b
//   Output:
//     1


// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char ch;
    cin>>ch;
    int count=0;
    for(int i=0;i<n;i++){
        if(!arr[i].empty() && (arr[i][0])==ch ){
            count++;
        }
    }
    cout<<count;
}
