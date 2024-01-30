#include <iostream>
#include <string>
using namespace std;

string fakeUnique(string str){
    if(str.length()==0){
        return "";
    }
    
    string rest= fakeUnique(str.substr(1));
    char first = str[0];


    if (first == rest[0]){
        return rest;
    }
    return (first+rest);
}


int main(){
    cout<<fakeUnique("ssssbbbbjjjjj")<<endl;
    return 0;
}