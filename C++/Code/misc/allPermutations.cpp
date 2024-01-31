#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int factorial(int a){
    return(a*factorial(a-1));
}

int main(){
    int n,x=0;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int *initial = new int[n];
    for(int i=0; i<n; i++){
        initial[i] = arr[i];
    }

    int *last;
    last = &arr[n-1];
    do{
        swap(last,last-1);
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        if (*last == arr[0]){
            last = &arr[n-1];
            x++;
            continue;
        }
        last--;
        x++;
    }while(x<= factorial(n));

    return 0;
}