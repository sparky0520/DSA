// ------------------------------------------------------NOT WORKING-------------------------------------------------------

#include <iostream>
using namespace std;

int merge(int arr[], int s, int mid, int e, int count)
{
// size of left half
    int lsize = mid - s;
// size of right half
    int rsize = e - mid;

// initializing left and right arrays
    int left[lsize], right[rsize];
    for (int i = 0; i < lsize; i++)
    {
        left[i] = arr[i+s];
    }
    for (int i = 0; i < rsize; i++)
    {
        left[i] = arr[i + lsize];
    }

// Stitching the two arrays together 
    int i = 0, j = 0, k = s;
    while (i < lsize && j < rsize)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            k++; i++;
        }
        else if(right[j]<left[i]){
            arr[k] = right[j];
            count += lsize-i;  
// all elements in the left array who have not been appended to arr will also be bigger than right[j]            
            k++; j++;
        }
    }
// Appending all remaining elements if any -- doesnt contribute to count
    while(i<lsize){
        arr[k] = left[i];
        k++; i++;
    }
    while(j<rsize){
        arr[k] = right[j];
        k++; j++;
    }
    return count;
}

int sort(int arr[], int s, int e)
{   
    int count =0;
    if (s < e)
    {
        int mid = (s + e) / 2;
        count += sort(arr, s, mid); // count(inversions) from sorting left half 
        count += sort(arr, mid + 1, e); // count from sorting right half
        count += merge(arr, s, mid, e,count); // count from stitching the two halves
    }
    return count; // return count
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sort(arr,0,n)<<endl;
    return 0;
}