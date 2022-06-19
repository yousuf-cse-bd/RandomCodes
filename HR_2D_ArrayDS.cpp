#include <iostream>
using namespace std;
int i, j;

int twoD_Array(int **A, int x, int y)
{
    for(i = 0; i<2;i++)
    {
        for(j = 0; j<2;j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int x = 2;
    int y = 2;
    int** A = new int*[x];
    // int count =  0;
    for(i = 0; i<x; i++)
    {
        for(j = 0; j<y; j++)
        {
            cout<<"Index:["<<i<<j<<"] Value = ";
            cin>>A[i][j];
            
        }
    }

    twoD_Array(A, x, y);
    
    return 0;
}
