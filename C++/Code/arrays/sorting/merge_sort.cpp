#include <iostream>
using namespace std;

void merge_sort(int arr[],int s,int mid, int end){
    int n1 = mid-s+1;  // length of left list
    int n2 = end-mid;   // length of right list

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[s+i];
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[n1+i];
    }

    int i=0,j=0,k=s;

    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            i++;
        }
        else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = a[i];
        k++; i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++; j++;
    }
}

void sort(int arr[],int s, int e){
    if(s==e){
        return;
    }
    int mid = (e+s)/2;
    sort(arr,s,mid);
    sort(arr,mid+1,e);
    merge_sort(arr,s,mid,e);
}

int main(){
    int arr[8] = {1,3,4,6,0,2,5,7};
    sort(arr,0,7);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}