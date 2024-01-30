#include <iostream>
using namespace std;

// Euclid Algorithm to find gcd of two numbers

int gcd(int a, int b){
    while(true){
        int c= a%b;
        if(c == 0){
            return b;
        }
        a =b;
        b=c;
    }
}

int main(){
    cout<<gcd(42,24)<<endl;
    return 0;
}