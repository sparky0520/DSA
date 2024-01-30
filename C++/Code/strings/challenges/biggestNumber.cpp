// Print the largest number string possible

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s= "21482";
    sort(s.begin(),s.end(),greater<char>());

    // for(int i=1; i<=s.length(); i++){
    //     cout<<s[s.length()-i];
    // }
    // cout<<endl;
    
    cout<<s<<endl;
}