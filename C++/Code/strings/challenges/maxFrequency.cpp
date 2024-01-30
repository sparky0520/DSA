#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int arr[26]={0};

    for(int i=0; i<str.length(); i++){
        arr[str[i]-97]++;
    }
    int max=0;
    char maxalpha;
    for(int j=0; j<26; j++){
        if (arr[j] >= max){
            max = arr[j];
            maxalpha = j+97;
        }
    }
    cout<<max<<" "<<maxalpha<<endl;
    return 0;
}