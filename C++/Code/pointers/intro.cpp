#include <iostream>
using namespace std;

int main(){
    char var='b';
    
    char *ch; 
    ch = &var;

    cout<<ch<<endl;
    ch++;
    cout<<ch<<endl;
}