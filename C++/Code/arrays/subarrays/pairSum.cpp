//Check if sum of any two elements in an array is equal to given
#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            if(k-a[i]==a[j]){
                cout<<i<<" "<<j<<" "<<"True"<<endl;
                return 0;
            }
        }
    }
    cout<<"False"<<endl;
    return 0;
}