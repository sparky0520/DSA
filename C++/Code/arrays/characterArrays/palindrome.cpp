// Check if a char is palindrome

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n+1];
    cin >> arr;
    int s = 0, e = n - 1;
    while (s != e && s<e)
    {
        if (arr[s] != arr[e])
        {
            cout << "False" << endl;
            return 0;
        }
        s++;
        e--;
    }
    cout << "True" << endl;
    return 0;
}