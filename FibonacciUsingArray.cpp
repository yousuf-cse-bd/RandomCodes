#include <iostream>
#include <cmath>
using namespace std;

void fibonacciSeries(unsigned n)
{
    int A[n];
    A[0] = 0;
    A[1] = 1;
    cout<<A[0]<<" "<<A[1]<<" ";

    for (int i = 2; i < n; i++)
    {
        // cout << A[i] << " ";
        A[i] = A[i - 2] + A[i - 1];
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n = 10;
    fibonacciSeries(n);

    return 0;
}
