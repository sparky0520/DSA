// Find the largest word in a sentence and its length

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);    // To take sentences as input. C++ generally skips to next variable when there's a space in the input

    int s=0,max=0,ms=0,me=0;

    for(int i=0; i<=n; i++){
        if(arr[i] ==' ' || arr[i]=='\0'){
            if((i-s)>max){
                max = i-s;
                ms=s;
                me=i;
            }
            s=i+1;
        }
    }
    cout<<max<<endl;
    int i=ms;
    while(i<me){
        cout<<arr[i];
        i++;
    }
}