#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
// Method 1
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
// Method 2
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end();it++){
         cout<<*it<<" ";
    }

    cout<<endl;
// Method 3
    for(auto ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    v.pop_back();

    vector<int> v2 (3,50);
    for(auto ele:v2){
        cout<<ele<<" ";
    }
    
    cout<<endl;
    swap(v,v2);

    for(auto ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(auto ele:v2){
        cout<<ele<<" ";
    }
    cout<<endl;

    vector<int> v3 = {3,2,1};
    sort(v3.begin(),v3.end());
    for(auto ele:v3){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}