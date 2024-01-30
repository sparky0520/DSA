#include <iostream>
using namespace std;

int powerP(int n, int p){
    if(p==0){
        return 1;
    }
    return n*powerP(n,p-1);
}

int main(){
    cout<<powerP(4,3)<<endl;
    return 0;
}