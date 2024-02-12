// DNF Sort - Dutch National Flag Sorting method: Involves three pointers to sort an array containing three unique elements only.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 0, 0, 1, 2, 2, 1, 0};
    int size = (sizeof(arr) / sizeof(arr[0]));
    int low, mid, high, temp;
    high = size;
    mid = 0;
    low = 0;

    while (mid < high)
    {
        if (arr[mid] == 0)
        {
            // swap arr[low] with arr[mid], low++, mid++
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            // mid++
            mid++;
        }
        else
        {
            // swap arr[high] with arr[mid], high--
            temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;

            high--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}