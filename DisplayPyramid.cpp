#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    system("cls");
    unsigned int row, column, n = 9;
    for(row = 1; row <= n; row++)
    {
        for(int space = row; space < n; space++)
        {
            cout<<" ";
        }
        for(column = 1; column<=row; column++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}
