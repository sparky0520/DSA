#include <iostream>
#include <cmath>
using namespace std;

void function(int n)
{
    int marked[n]={0};
    for (int i = 2; i <= pow(n, 0.5); i++)
    {
        if (!marked[i])
        {
            for (int j = pow(i, 2); j <= n; j += i)
            {
                marked[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (!marked[i]){
            cout<<i<<' ';
        }
    }
}

int main()
{
    function(50);
    return 0;
}