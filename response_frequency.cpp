// Problem: Count frequency of each unique response in an array.
// Input:
//   n - number of responses (1 ≤ n ≤ 25)
//   n space-separated integers (1 ≤ response ≤ 50)
// Output:
//   - Each unique response followed by its frequency
// Sample:
//   Input: 5\n1 2 1 3 2
//   Output:
//   1: 2
//   2: 2
//   3: 1



// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int responses[25];
    int counted[51]={0};
    bool printed[51]={false};
    for(int i=0;i<n;i++){
        cin>>responses[i];
        counted[responses[i]]++;
    }
    for(int i=0;i<n;i++){
        int num=responses[i];
        if(!printed[num]){
            cout<<num<<": "<<counted[num]<<endl;
            printed[num]=true;
        }
    }
    
}
