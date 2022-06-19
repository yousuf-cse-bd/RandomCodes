/****
 * #problem: Modular Reciprocal Hill Cipher
 * @Author: MuhammadYousufAli
 * @Since: 1st April 2021
 */

#include <iostream>
using namespace std;

int modularInverse(int num)
{
    int m, M;
    for (m = 1; ; m++)
    {
        if (num * m % 26 == 1)
        {
            M = m;
            break;
        }
    }

    return M;
}

int main(int argc, char const *argv[])
{
    int i, j, a, b, determinant;
    int A[2][2] = {2, 1,
                   3, 4};
    int adjointB[2][2] = {};
    a = 1, b = 1;
    cout<<"Given a Matrix Below:"<<endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            cout << A[i][j] << "\t";
            adjointB[i][j] = A[i][j];
            if (i == j)
            {
                a *= A[i][j];
            }
            else if (i + j == 2 - 1)
            {
                b *= A[i][j];
            }
        }
        cout << endl;
    }
    // a = A[0][0] * A[1][1];
    // b = A[1][0] * A[0][1];
    determinant = a - b;

    cout << "First Diagonal = " << a << endl;
    cout << "Second Diagonal = " << b << endl;
    
    if (determinant % 2 != 0 && determinant != 0)
    {
        cout << "The Diterminant: " << determinant << " & Odd Value" << endl;
        cout << "Adjoint Matrix of A[2x2] Multiply with Modular Inverse:" << endl;
        ///Swaping
        swap(adjointB[0][0], adjointB[1][1]);
        swap(adjointB[1][0], adjointB[0][1]);

        // for(i = 0; i<2;i++)
        // {
        //     for(j = 0;j < 2; j++)
        //     {
        //         cout<<adjointB[j][i]<<"\t";
        //     }
        //     cout<<endl;
        // }

        
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                if (i == j)
                {
                    adjointB[j][i] = adjointB[j][i] * modularInverse(determinant);
                    cout << adjointB[j][i] << "\t";
                }
                else if(i + j == 2- 1)
                {
                    adjointB[j][i] = (-1)*adjointB[j][i] * modularInverse(determinant);
                    cout << adjointB[j][i] << "\t";
                }
            }
            cout << endl;
        }

        // cout<<"OutofLoop: "<<adjointB[0][1]<<endl;

        cout<<"\nTherefor..."<<endl;
        for(i = 0; i< 2; i++){
            for (j = 0; j < 2; j++)
            {
                if(adjointB[j][i] < 0)
                {
                    while (true)
                    {
                        adjointB[j][i] =  adjointB[j][i] + 26;
                        if(adjointB[j][i] > 0)
                        break;
                    }
                    cout << adjointB[j][i] << "\t";
                }else
                {
                    adjointB[j][i] =  adjointB[j][i] % 26;
                    cout << adjointB[j][i] << "\t";
                }
            }
            cout<<endl;
        }        
    }
    else
    {
        cout << "The Diterminant: " << determinant << " & Even" << endl;
    }

    cout<<"End Codes..."<<endl;

    return 0;
}
