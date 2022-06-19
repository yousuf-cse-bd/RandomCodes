#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int n;
    n = 4;
    
    //top part
    for(int row = 1; row<=n; row++)
    {
        for(int column = 1; column<=row ; column ++)
        {
            cout<<"*"; //left part
        }
        int space = 2*n - 2*row;
        for(int column = 1; column <= space; column++)
        {
            cout<<" "; //mid spaces
        }
        for(int column = 1; column<=row ; column ++)
        {
            cout<<"*"; //right part
        }       
        cout<<endl;
    }
    //bottom all part
    for(int row = n; row>=1; row--)
    {
        for(int column = 1; column<=row ; column ++)
        {
            cout<<"*";     //bottom left part
        }
        int space = 2*n - 2*row;
        for(int column = 1; column <= space; column++)
        {
            cout<<" ";
        }
        for(int column = 1; column<=row ; column ++)
        {
            cout<<"*";     //bottom right part
        }       
        cout<<endl;
    }


    return 0;
}
