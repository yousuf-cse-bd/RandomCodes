/*****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 02 May 2022
 * Program: A simple matrix maltiplication
 */


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int row1, row2, column1, column2, i, j;
    cout<<"Enter Row1 for A: ";
    cin>>row1;
    cout<<"Enter Column1 for B: ";
    cin>>column1;

    int A[row1][column1];
    cout<<"Insert element for A["<<row1<<"x"<<column1<<"]:"<<endl;
    for(i = 0; i<row1; i++)
    {
        for(j = 0; j<column1; j++)
        {
            cout<<"A["<<i<<" "<<j<<"] = ";
            cin>>A[i][j];
        }
    }
    //Print matrix A
    cout<<"\nPrint Matix B:"<<endl;
    for(i = 0; i<row1; i++)
    {
        for(j = 0; j<column1; j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\nEnter Row2 for B: ";
    cin>>row2;
    cout<<"Entr Column2 for B: ";
    cin>>column2;

    //check first matrix column and second matrix row isEqual
    if(column1 == row2)
    {
        cout<<"Matrix Maltiplication is possible."<<endl;
        int B[row2][column2];
        cout<<"Insert element for B["<<row2<<"x"<<column2<<"]:"<<endl;
        for(i = 0; i<row2; i++)
        {
            for(j = 0; j<column2; j++)
            {
                cout<<"B["<<i<<" "<<j<<"] = ";
                cin>>B[i][j];
            }
        }
        //Print matrix B
        cout<<"\nPrint Matix A:"<<endl;
        for(i = 0; i<row2; i++)
        {
            for(j = 0; j<column2; j++)
            {
                cout<<B[i][j]<<"\t";
            }
            cout<<endl;
        }

        //Expected matrix and logic
        cout<<"\nMatrix Maltiplication:"<<endl;
        int mult[row1][column2];
        for(i = 0; i<row1; i++) // loop run untill row1
        {
            for(j = 0; j<column2; j++) // loop run untill column1
            {
                mult[i][j] = 0;
                // there are traverse A matirx column1 and B matrix row2
                for(int k = 0; k<row2; k++) 
                {
                    mult[i][j] += A[i][k] * B[k][j]; 
                }
            }
        }

        //Print the result
        for(i = 0; i<row1; i++)
        {
            for(j = 0; j<column2; j++)
            {
                cout<<mult[i][j]<<"\t";
            }
            cout<<endl;
        }

    }
    else // not equal
    cout<<"Matrix maltiplication is not possible...!"<<endl;
    return 0;
}
