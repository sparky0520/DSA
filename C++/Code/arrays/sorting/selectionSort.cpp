#include <iostream>
#include <chrono>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<(n-1); i++){
        for(int j=(i+1); j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){    
    // Record the start time
    auto start = chrono::high_resolution_clock::now();

    // Main logic
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    selection_sort(arr, n);

    // Record the end time
    auto end = chrono::high_resolution_clock::now();

    // Calculate the duration in milliseconds
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "Runtime: " << duration.count() << " milliseconds" << endl;

}