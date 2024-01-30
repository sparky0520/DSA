#include <iostream>
using namespace std;

int main(){
    int arr[3] = {10,20,30};
    cout<<*arr<<endl;    // an indexing pointer, not a normal pointer, points at the first element of the list

    int *ptr;
    ptr = arr;          // Needs a pointer assigned

    for(int i=0; i<3; i++){
        cout<<*(arr+i)<<endl;  // Indexing pointer points to next element on adding integers to it. Its own value cant change 
        // cout<<*ptr<<endl;
        // ptr++;
        // arr++; is illegal as its not a pointer. 
    }

}