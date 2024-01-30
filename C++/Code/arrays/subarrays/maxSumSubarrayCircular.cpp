// Find the maxium sum of a subarray in a circular array

// Max Subarray Sum in Circular Array = Sum of all elements in array - Sum of non contributing elements
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadane(int a[], int n)
{
    int max = INT_MIN, sum = 0;

    for (int j = 0; j < n; j++)
    {
        sum += a[j];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int nonwrapsum = kadane(a,n);

    int totalSum = 0;
    int cicularSum;
    
    for(int i=0; i<n; i++){
        totalSum += a[i];
        a[i] = -a[i];
    }
    cicularSum = totalSum + kadane(a,n);

    cout<<max(cicularSum,nonwrapsum)<<endl;
    return 0;
}