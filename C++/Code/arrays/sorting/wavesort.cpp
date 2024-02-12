// Wave Sort - Not your typical sorting algo ! Sort elements of an array such that the alternate elements are a local minima. Hence making a wave pattern

#include <iostream>
using namespace std;

void swap(int arr[],int a,int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main(){
    int arr[] = {1,3,4,7,5,6,2};
    int size = (sizeof(arr)/sizeof(arr[0]));

    for(int i=1; i<size; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i] > arr[i+1]){
            swap(arr,i,i+1);
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}