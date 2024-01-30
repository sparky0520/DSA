#include <iostream>
#include <string>
using namespace std;

void asciiSubseq(string s, string a){
    if(s.length() == 0){
        cout << a << endl;
        return;
    } 
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    asciiSubseq(ros, a);
    asciiSubseq(ros, a + ch);
    asciiSubseq(ros, a + to_string(code));
}

int main(){
    asciiSubseq("AB", "");
    return 0;
}
