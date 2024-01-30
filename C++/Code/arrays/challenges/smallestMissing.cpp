#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
     
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    const int N = 1e6+2;
    vector<int> idx(N,0);

    for(int i=0; i<n; i++){
        if(a[i]<0){
            continue;
        }
        if(!idx[a[i]]){
            idx[a[i]] = 1;
        }
    }
    for(int i=0; i<N; i++){
        if(!idx[i]){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}