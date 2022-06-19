#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size, i, j;
    cout << "Enter Matrix Size Here: ";
    cin >> size;
    float A[size][size];

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cin >> A[i][j];
        }
    }

    float transeOfA[size][size] = {};
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j || (i + j == size - 1))
            {
                A[j][i] = A[j][i];
            }
            else
            {
                A[j][i] = A[j][i] * -1.0;
            }
        }
    }

    // cout<<"Traspose: "<<transeOfA[0][1]<<endl;
    cout<<"Tranpose Matrix A^T:"<<endl;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {

            cout<<A[j][i]<<" ";
    
        }
        cout << endl;
    }

    cout << "End\n";
    return 0;
}
