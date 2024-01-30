// Find the first subarray whose sum is equal to given s.

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int start=0,end=0,sum=0;
    for(int i=0; i<n; i++){
        sum += a[i];
        if(sum>s){
            sum -= a[start];
            start++;
        }
        if(sum == s){
            cout<<start+1<<" "<<end+1<<endl;
            return 0;
        }else{
            end++;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}