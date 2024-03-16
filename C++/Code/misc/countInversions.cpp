#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int>arr;
    int n,a,count=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0; i<(n-1); i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
}