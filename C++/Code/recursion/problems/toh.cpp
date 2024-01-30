#include <iostream>
using namespace std;

void towerOfHanoi(int n,char source, char helper, char destination){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,source,destination,helper);
    cout<<"Move from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1,helper,source,destination);
}
int main(){
    towerOfHanoi(3,'A','B','C');
    return 0;  
}