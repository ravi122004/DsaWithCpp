// Problem: Merge Two Sorted Arrays and Output Unique Members
// Company Tag: Capgemini
//
// Two university clubs "Tech Wizards" and "Creative Minds" are merging.
// Given two sorted arrays representing member IDs of each club,
// merge them and print unique member IDs in sorted order.
//
// Input:
//   - n: Size of first array (Tech Wizards)
//   - n sorted integers for first array
//   - m: Size of second array (Creative Minds)
//   - m sorted integers for second array
//
// Output:
//   - Unique member IDs from the merged arrays, space-separated.
//
// Constraints:
//   1 ≤ n, m ≤ 10
//   1 ≤ member IDs ≤ 50
//
// Sample Input 1:
//   5
//   1 2 3 4 5
//   7
//   4 5 6 6 7 7 8
// Sample Output 1:
//   1 2 3 4 5 6 7 8
//
// Sample Input 2:
//   3
//   2 2 2
//   4
//   3 4 5 6
// Sample Output 2:
//   2 3 4 5 6



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
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int maxSize=n+m;
    int res[maxSize];
    for(int i=0;i<n;i++){
        res[i]=arr[i];
    }    
    for(int i=0;i<m;i++){
        res[n+i]=arr2[i];
    }
    for(int i=0;i<maxSize;i++){
        bool isduplicate=false;
        for(int j=i+1;j<maxSize;j++){
            if(res[i]==res[j]){
                isduplicate=true;
                break;
            }
            
        }
        if(!isduplicate){
            cout<<res[i]<<" ";
        }
    }
}
