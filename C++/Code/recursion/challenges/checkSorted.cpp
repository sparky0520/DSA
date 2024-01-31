// To check if the given array is in ascending order

#include <iostream>
using namespace std;

// Basic idea is that:

// First element of the given array is less than the second element
// Through recursion pass the rest array for checking if first two are in correct order
// One element is considered sorted array (ie. last element is always a sorted array).

bool checkSorted(int *arr, int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = checkSorted(arr + 1, n - 1);  
    if ((arr[0] <= arr[1]) && restArray)    
    {
        return true;
    }
    return false;
}

bool checkSortedFromStart(int *arr, int n, int i)
{
    if (i + 1 == n)
    {
        return true;
    }
    bool result = (arr[i] <= arr[i + 1]);   // check if first two elements of the array are in correct order 
    if (result)                             // if they are in order, then check for the next two elements
    {
        return checkSortedFromStart(arr, n, i + 1);
    }
    else                                    // if not then array is not in ascending order, return false
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << checkSortedFromStart(arr, n, 0) << endl;
    return 0;
}