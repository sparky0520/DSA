#include <iostream>
#include <chrono>
using namespace std;

int binary_search(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid= (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return -1; 
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
        cout<<"Enter the "<<i<<"th index of array : ";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key : ";
    cin>>key;

    cout<<"The position of the key in the array is : "<<binary_search(arr, n, key )<<endl;

    // Record the end time
    auto end = chrono::high_resolution_clock::now();

    // Calculate the duration in milliseconds
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "Runtime: " << duration.count() << " milliseconds" << endl;

}