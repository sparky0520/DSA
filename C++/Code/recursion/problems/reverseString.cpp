#include <iostream>
#include <string>
using namespace std;

void reverse(string str, int n, int i){
    if( i == n ){
        cout<<str[i];
        return;
    }
    reverse(str, n, i+1);

    cout<<str[i];
    return;
    
}   

int main(){
    string str;
    cin>>str;
    reverse(str, str.length(), 0);
    cout<<endl;
}