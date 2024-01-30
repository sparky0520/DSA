// Check if array is in ascending order or not

#include <iostream>
using namespace std;

bool checkAsc(int arr[], int n){
    if(n == 1){
        return true;
    }
    bool restArray = checkAsc(arr+1, n-1);

    return (arr[0]<arr[1] && restArray);
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<checkAsc(arr,n)<<endl;
}