#include <iostream>
using namespace std;

int getBit(int n, int pos){    // get bit value at position
    return((n & (1<<pos)) != 0);
}
int setBit(int n, int pos){   // set bit to 1 at position
    return(n | (1<<pos));
}
int clearBit(int n, int pos){  // set bit to 0 at position
    int mask= ~(1<<pos);
    return(n & mask);
}
int updateBit(int n, int pos, int digit){  // set value at certain position
    int mask = ~(1<<pos);
    n = n & mask;

    return (n | (digit<<pos));
}

int main(){
    cout<<updateBit(5,2,0)<<endl;
    return 0;
}