#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int row, column;
    row = 2, column = 3;

    int** table = new int*[row];
    for(int i = 0; i<row; i++)
    {
        table[i] = new int[column];
    }

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {
            table[i][j] = i*j;
        }
    }

    
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<table[i][j]<<"\t";
        }
        cout<<endl;
    }

    // free[] table;


    return 0;
}
