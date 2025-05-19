// Problem: Identify the Majority Candidate in an Election
// Company: TCS
//
// A majority candidate is defined as the one who receives more than half of the total votes.
//
// Input:
//   - n: Number of votes
//   - n space-separated integers representing candidate IDs
//
// Output:
//   - If there is a majority candidate, print: "The majority candidate is ID X"
//   - Otherwise, print: "No majority candidate found"
//
// Constraints:
//   1 ≤ n ≤ 20
//   1 ≤ candidate ID (vote) ≤ 10
//
// Sample Input 1:
//   8
//   4 4 2 4 4 3 4 3
// Sample Output 1:
//   The majority candidate is ID 4
//
// Sample Input 2:
//   6
//   1 2 3 4 5 6
// Sample Output 2:
//   No majority candidate found







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
    int majorityCount=(n/2);
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>majorityCount){
            cout<<"The majority candidate is ID "<<arr[i];
            return 0;
        }
    }
    cout<<"No majority candidate found";
}
