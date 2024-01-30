#include <iostream>
#include <string>
using namespace std;

string xToLast(string str){
    if(str.length() ==0){
        return "";
    }
    string rest = xToLast(str.substr(1));
    char first = str[0];

    if(first == 'x'){
        return (rest+'x');
    }else{
        return (first+rest);
    }
}

int main(){
    cout<<xToLast("axxvxxxxxxxdxcef")<<endl;
    return 0;
}