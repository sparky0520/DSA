#include <iostream>
using namespace std;

int main(){
    int a =10;
    
    int *p;     // Pointer 1
    p=&a;

    int **q;     // Pointer 2 pointing to pointer 1-- No. of stars denote how many times can it dereference 
    q = &p;

// Printing value of a
    cout<<a<<endl; 
    cout<<*p<<endl;
    cout<<**q<<endl;
}