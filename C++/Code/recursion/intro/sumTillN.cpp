#include <iostream>
using namespace std;

int sumN(int n){
    if(n==0){
        return 0;
    }
    return n+sumN(n-1);
}

int main(){
    cout<<sumN(10000)<<endl;
    return 0;
}