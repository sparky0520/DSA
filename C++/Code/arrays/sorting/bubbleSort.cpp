#include <iostream>
#include <chrono>
using namespace std;

void bubble_sort(int arr[], int n){
    int counter = 1;
    while(n-1-counter){
        for(int i=0; i<(n-counter); i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i+1];
                arr[i+1]=arr[i];
                arr[i] = temp;
            }
        }
        counter++;
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

    bubble_sort(arr, n);

    // Record the end time
    auto end = chrono::high_resolution_clock::now();

    // Calculate the duration in milliseconds
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "Runtime: " << duration.count() << " milliseconds" << endl;

}