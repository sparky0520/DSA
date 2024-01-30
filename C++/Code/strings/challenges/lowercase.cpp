#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
// To lowercase 

    string s= "AIOFHASFJAIOJFIP";
    // string s1;
    // for (int i=0; i<s.size(); i++){
    //     s1 += (s[i]+32);
    // }
    // cout<<s1<<endl;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
}