// Find the subarray with the maximum sum - Kadane's Algorithm --> sum of contributing elements
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int max = INT_MIN,sum = 0, start=0, end=0;

    for(int j=0; j<n; j++){
        sum +=a[j];
        if(sum > max){
            max = sum;
        }
        if(sum<0){
            sum = 0;
            start = end;
        }else{
            end++;
        }
    }
    cout<<max<<endl;
}