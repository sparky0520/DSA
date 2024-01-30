#include <iostream>
using namespace std;
// Numbers divisible by 5 or 7 between 1 and 40

void function (int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);

    cout<<c1+c2-c3<<endl;
}
int main(){
    function(40,5,7);
    return 0;
}