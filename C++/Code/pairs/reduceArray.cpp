#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    int arr[] = {10,16,7,14,5,3,2,9};
    vector <pair<int , int>> v;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        // pair <int,int> p;
        // p.first = arr[i];
        // p.second = i;
        // v.push_back(p);

        v.push_back(make_pair(arr[i],i));
    }

    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++){
        arr[v[i].second] = i+1;
    }

    for(int i=0; i< v.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    return 0;
}