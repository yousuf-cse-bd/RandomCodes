#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int n, row, column, spaces;
    cout<<"Enter nth Value Here: ";
    cin>>n;

    for(row = 0; row<=n; row++)
    {
        for(spaces = 1; spaces<=n - row; spaces++)
        {
            cout<<"  ";
        }

        for(column = row; column>=0; column--)//left part
        {
            cout<<column<<" ";
        }
        for(column = 1; column<=row; column++)//right part
        {
            cout<<column<<" ";
        }

        cout<<"\n";
    }

    
    return 0;
}
