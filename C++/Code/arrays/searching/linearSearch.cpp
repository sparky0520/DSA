#include <iostream>
#include <chrono>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;

}

int main(){
    // Record the start time
    auto start = chrono::high_resolution_clock::now();

    // Main logic
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter value of "<<i<<"th position : ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key : ";
    cin>>key;

    cout<<"Location of key in array is : "<<linear_search(arr, n, key)<<endl;
    
    // Record the end time
    auto end = chrono::high_resolution_clock::now();

    // Calculate the duration in milliseconds
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "Runtime: " << duration.count() << " milliseconds" << endl;
}