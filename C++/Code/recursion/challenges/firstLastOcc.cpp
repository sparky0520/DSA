// To find first and last occurance of a number in an array using recursion

#include <iostream>
using namespace std;

int first(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    else{
        first(arr, n, i+1, key);
    }
}

int last(int arr[], int n, int i, int key){
    if( i == n ){
        if(arr[i] == key){
            return i;
        }else{
            return -1;
        }
    }
    int restArray= last(arr, n, i+1, key);
    if(restArray != -1){
        return restArray;
    }
    if(arr[i] == key){
        return i;
    }
    else{
        return -1;
    }
}

int main(){
    int arr[] = {2,2,3,4};
    cout<<first(arr,4,0,2)<<" "<<last(arr,4,0,2) <<endl;
    return 0;
}