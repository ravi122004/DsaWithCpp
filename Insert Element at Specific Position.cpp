// Problem: Insert an element at a given position in an array.
// Input:
//   n - size of the array (1 ≤ n ≤ 20)
//   n space-separated integers (1 ≤ arr[i] ≤ 100)
//   i - 1-based position to insert (1 ≤ i ≤ n+1)
//   m - element to insert (1 ≤ m ≤ 100)
// Output:
//   - Original array
//   - Updated array after insertion
//   - If i is invalid, print "Invalid position!"
// Sample:
//   Input: 5\n1 2 3 4 5\n3\n10
//   Output:
//     Original array: 1 2 3 4 5
//     Updated array: 1 2 10 3 4 5


    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int pos;
        cin>>pos;
        int value;
        cin>>value;
        cout<<"Original array: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
        if(pos<=0 || pos>n){
            cout<<"Invalid position!";
        }else{
            
            for(int i=n;i>=pos;i--){
                arr[i]=arr[i-1];
            }
            
            arr[pos-1]=value;
            cout<<"Updated array: ";
            for(int i=0;i<=n;i++){
                cout<<arr[i]<<" ";
            }
        }
        
        
        
    }
