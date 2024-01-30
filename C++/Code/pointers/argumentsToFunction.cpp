#include <iostream>
using namespace std;

// void swap(int a, int b){
void swap(int *a, int *b){
    int temp =*a;
    *a =*b;
    *b =temp;
}

int main(){
    int a=2;
    int b=3;

    // swap(a,b);   passing by value, not reference, ie. only the values of a and b are being passed as argument
    swap(&a, &b);   // Passing by reference because we are passing two pointers as argument to the swap function
                    // They have the addresses of a and b as values passed to them who will be deferenced and have their value changed
    cout<<a<<" "<<b<<endl;
}