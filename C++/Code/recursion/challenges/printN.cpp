//Print numbers in inc and dec order till n
#include <iostream>
using namespace std;

void printDec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printDec(n-1);
}

void printInc(int n){
    if(n==1){
        cout<<"1"<<" ";
        return;
    }
    printInc(n-1);
    cout<<n<<" ";
    return;
}

int main(){
    int n;
    cin>>n;
    printDec(5);
}