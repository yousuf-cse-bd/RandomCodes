///Matrix Sum and Sub

#include <iostream>
using namespace std;

int main(void)
{
    ///Variable Declare
    int row, column,x,y;
    cout<<"Enter Row Value Here: ";
    cin>>row;

    cout<<"Enter Column Value Here: ";
    cin>>column;

    ///First Matrix
    int firstMatrix[row][column];

    cout<<"Enter First Matrix Element["<<row<<"x"<<column<<"]:"<<endl;
    for(x = 0 ; x<row; x++)
    {
        for(y = 0; y<column; y++)
        {
            cin>>firstMatrix[x][y];
        }
    }

    ///Second Matrix
    int secondMatrix[row][column];
    cout<<"Enter Second Matrix Element["<<row<<"x"<<column<<"]:"<<endl;
    for(x = 0 ; x<row; x++)
    {
        for(y = 0; y<column; y++)
        {
            cin>>secondMatrix[x][y];
        }
    }
    ///Sum Matrix
    int sumMatrix[row][column] = {0,0};
    cout<<"\nSum Of Upon Matrix:"<<endl;
    for(x = 0 ; x<row; x++)
    {
        for(y = 0; y<column; y++)
        {
            sumMatrix[x][y] = firstMatrix[x][y] + secondMatrix[x][y];
            cout<<sumMatrix[x][y]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
