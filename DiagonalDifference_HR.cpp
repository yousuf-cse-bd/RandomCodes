/****
 * Diagonal Differnece
 * @Author: MuhammadYousufAli
 * @Since: 17th February 2021
 */

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,i,j, leftDiagonal, rightDiagonal;
    leftDiagonal = rightDiagonal = 0;
    cin>>n;
    int A[n][n];

    for(i = 0; i<n; i++)
    {
        for(j = 0;j<n; j++)
        {
            cin>>A[i][j];
        }
    }


    for(i = 0; i<n; i++)
    {
        for(j = 0;j<n; j++)
        {
            if(i == j)
            {
                leftDiagonal = leftDiagonal + A[i][j];
            }
            if((i + j) == n - 1)
            {
                rightDiagonal = rightDiagonal + A[i][j];
            }
        }
    }

    int sum =leftDiagonal - rightDiagonal;
    sum = abs(sum);
    cout<<sum<<endl;

    return 0;
}
