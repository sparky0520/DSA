// Place n queens on an nxn chess board such that no queen is eliminated.
#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{

    // Checking in the same column
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }

    // Checking in the back diagnal
    int row = x, col = y;
    while ((row >= 0) && (col >= 0))
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    // Checking in the front diagnal
    row = x;
    col = y;
    while ((row >= 0) && (col < n))
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int **arr, int x, int n)
{

    // Checking if problem is solved
    if (x >= n)
    {
        return true;
    }

    // going through all positions in a row for possible solutions
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1; // keeping queen at the safe position
            if (nQueen(arr, x + 1, n))
            { // checking if we can get a solution map with current position of queen in current row
                return true;
            }
            arr[x][col] = 0; // backtracking -- removing queen if no possible solution map found
        }
    }
    return false; // if no position gives a possible solution -- no soln found
}

int main()
{
    // Initializing n
    int n;
    cin >> n;

    // Initializing chessboard map
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    // printing output
    cout << endl
         << nQueen(arr, 0, n) << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}