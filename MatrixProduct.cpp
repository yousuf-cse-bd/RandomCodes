///Matrix Product
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int aRow, aColumn, bRow, bColumn, i,j,k,sum = 0;
    cout<<"Enter Row For Matrix A: ";
    cin>>aRow;
    cout<<"Enter Column for Matrix A: ";
    cin>>aColumn;

    int A[aRow][aColumn];
    cout<<"\nEnter Matrix Elements For A:"<<endl;
    for(i = 0; i < aRow ; i++)
    {
        for(j = 0; j < aColumn ; j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"\nEntered All Elements Below(MatrixA):"<<endl;
    for(i = 0; i < aRow ; i++)
    {
        for(j = 0; j < aColumn ; j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\nEnter Row for Matrix B: ";
    cin>>bRow;
    cout<<"Enter Column for Matrix B: ";
    cin>>bColumn;

    if(aColumn == bRow)
    {
        int B[bRow][bColumn];
        cout<<"\nEnter Matrix Elements For B:"<<endl;
        for(i = 0 ; i<bRow ; i++)
        {
            for(j = 0; j<bColumn ; j++)
            {
                cin>>B[i][j];
            }
        }
        cout<<"\nEntered All Elements Below(MatrixB):"<<endl;
        for(i = 0; i < bRow ; i++)
        {
            for(j = 0; j < bColumn ; j++)
            {
                cout<<B[i][j]<<"\t";
            }
            cout<<endl;
        }

        ///Logic BuildUp
        int AB[aRow][bColumn];
        for(i = 0; i < aRow ;i++)
        {
            for(j = 0; j<bColumn ;j++)
            {
                // There are traverse A matrix column1 and B matirx row2
                for(k = 0 ;k<bRow ; k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }
                AB[i][j] = sum;
                sum = 0;
            }
        }

        ///Final Result
        cout<<"\nProduct of Matrix A.B Below:"<<endl;
        for(i = 0;i<aRow; i++)
        {
            for(j = 0; j<bColumn ;j ++)
            {
                cout<<AB[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"Which is "<<aRow<<"x"<<bColumn<<" Matrix."<<endl;
    }
    else
    {
        cout<<"Matrix Product Not Possible...!"<<endl;
    }
    getch();

    return 0;
}
