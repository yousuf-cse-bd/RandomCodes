#include <iostream>
using namespace std;

int main()
{
    int i,j,k;///Loop Control
    ///Input Row n Column
    int Arow, Acolumn;
    int Brow, Bcolumn;

    cout<<"Enter First Matrix Row Value Here: ";
    cin>>Arow;
    cout<<"Enter First Matrix Column Value Here: ";
    cin>>Acolumn;
    ///First Matrix with input Items
    int A[Arow][Acolumn];
    cout<<"\nEnter All Elements For Matrix A:"<<endl;
    for(i = 0; i<Arow; i++)
    {
        for(j = 0; j<Acolumn; j++)
        {
            cin>>A[i][j];
        }
    }


    cout<<"\nEnter Second Matrix Row Value Here: ";
    cin>>Brow;
    cout<<"Enter Second Matrix Column Value Here: ";
    cin>>Bcolumn;

    ///Logic

    if(Acolumn == Brow)
    {
        ///Second Matrix with input Items
        int B[Brow][Bcolumn];
        cout<<"\nEnter All Elements For Matrix B:"<<endl;
        for(i = 0; i<Brow; i++)
        {
            for(j = 0; j<Bcolumn; j++)
            {
                cin>>B[i][j];
            }
        }

        ///Production 
        int productA_B [Arow][Bcolumn];
        int sum = 0;
        for(i = 0; i<Arow; i++)
        {
            for(j = 0; j<Bcolumn; j++)
            {
                // There are traverse A matrix column1 and B matirx row2
                for(k = 0; k<Brow; k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }

                productA_B[i][j] = sum;
                sum = 0;
            }
        }
        ///OutPut/Result/Product
        cout<<"Product Matrix: "<<Arow<<"x"<<Bcolumn<<":\n"<<endl;
        for(i = 0; i<Arow; i++)
        {
            for(j = 0; j<Bcolumn; j++)
            {
                cout<<productA_B[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Matrix Product Not Valid...!"<<endl;
    }

    return 0;
}
