#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **solArr)
{
    if (isSafe(arr, x, y, n))
    { // If rat reached the final destination - return - solution found !
        if (x == n - 1 && y == n - 1)
        {
            solArr[x][y] = 1;
            return true;
        }

        solArr[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, solArr))    // Checking if position to the right of the rat is safe
        { 
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, solArr))    // Checking position below the rat is safe
        { 
            return true;
        }
        solArr[x][y] = 0; // If we cant go right or down, we are stuck, getting current position out of solution array - backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    // Initializing input map
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Initializing solution map -- all zeroes
    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    cout << endl;
    if (ratinMaze(arr, 0, 0, n, solArr))
    { // If a solution exists -- print solution map
        cout << ratinMaze(arr, 0, 0, n, solArr) << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << ratinMaze(arr, 0, 0, n, solArr) << endl;
    }

    return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1