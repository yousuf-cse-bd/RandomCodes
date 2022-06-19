/****
 * #problem: Modular Reciprocal Hill Cipher
 * @Author: MuhammadYousufAli
 * @Since: 1st April 2021
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[2][2] = {2, 1,
                   3, 4};
    int i, j, firstDiagonal, secondDiagonal;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    firstDiagonal = 1;
    secondDiagonal = 1;

    firstDiagonal = A[0][0] * A[1][1];
    secondDiagonal = A[0][1] * A[1][0];
    cout << "First Diagonal: " << firstDiagonal << "\nSecond Diagonal: " << secondDiagonal << endl;

    int determine = firstDiagonal - secondDiagonal;
    cout << "Diterminant: " << determine << endl;
    if (determine == 0)
    {
        cout << "Inverse Matrix Not Possible...!" << endl;
    }
    else
    {
        int M = 0;
        for (int m = 1;; m++)
        {
            if (determine * m % 26 == 1)
            {
                M = m;
                break;
            }
        }
        swap(A[0][0], A[1][1]);
        swap(A[0][1], A[1][0]);
        int B[2][2] = {};
        for (i = 0; i < 2; i++)
        {

            for (j = 0; j < 2; j++)
            {

                if (i == j)
                {
                    B[i][j] = A[i][j];
                    cout << " " << B[j][i] << "\t";
                }
                else
                {
                    B[i][j] = A[i][j] * (-1);
                    cout << B[i][j] << "\t";
                }
            }
            cout << endl;
        }

        cout << "Final Result Without Mod 26 " << endl;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                B[j][i] = (B[j][i] * M);
                cout << (B[j][i]) << "\t";
            }
            cout << endl;
        }
    }
    return 0;
}
