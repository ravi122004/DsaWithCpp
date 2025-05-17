// Problem: Search for a string in an array and print its index (0-based).
// Input:
//   N - number of strings (1 ≤ N ≤ 20)
//   Next N lines - strings (case-sensitive)
//   Last line - string to search
// Output:
//   - Print the index if found
//   - Else, print "String not found!"
// Sample:
//   Input: 3\nApple\nMango\nBanana\nApple
//   Output: 0


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
    string tbf;
    cin>>tbf;
    int t=52;
    for(int i=0;i<n;i++){
        if(arr[i]==tbf){
            t=i;
        }
       
    }
    if(t!=52){
        cout<<t;
    }
    else{
        cout<<"String not found!";
    }
    
}
