#include <iostream>
using namespace std;
#define ROWS 5
#define COLUMNS 5

int main(int argc, char const *argv[])
{
    /* code */
    int i, j, row, column;
    int product[ROWS][COLUMNS];
    cout<<"   MULTIPLICATION TABLE\n"<<endl;
    cout<<"    ";
    for(j = 1; j<=COLUMNS; j++)
    {
        printf("%4d", j);
    }
    cout<<"\n_________________________________\n";
    for(i = 0; i<ROWS; i++)
    {
        row = i + 1;
        printf("%2d |", row);
        for(j = 1; j<=COLUMNS; j++)
        {
            column = j;
            product[i][j] = row * column;
            printf("%4d", product[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}
