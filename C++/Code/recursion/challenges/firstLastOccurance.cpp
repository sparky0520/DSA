// Print first and last occurance of element in an array
#include <iostream>
using namespace std;

int first_occurance(int* arr, int target ,int size, int i){
    if(i==size){
        return false;
    }
    if(arr[i] == target){
        return i;
    }
    first_occurance(arr,target,size,i+1);
}

int last_occurance(int* arr, int target ,int size, int i){
    if(i==size){
        return -1;
    }
    int result = last_occurance(arr,target,size,i+1);
    
    if(result != -1){
        return result;
    }else if(arr[i] == target){
        return i;
    }else{
        return -1;
    }
}

int main(){
    int n,target;
    cin>>n;
    cin>>target;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<first_occurance(arr,target,n,0)<<endl;
    cout<<last_occurance(arr,target,n,0)<<endl;
}