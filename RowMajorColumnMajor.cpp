#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int twoDimentionMatrix[3][3] = {1, 2, 3,
                                  4, 5, 6,
                                  7, 8, 9};

    cout<<"Givn the Matrix: \n";
    for(int i = 0; i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            cout<<twoDimentionMatrix[i][j]<<" ";
        }
        cout<<endl;
    }                                 
                                
    cout<<"\nRow Major the Matrix: ";
    for(int i = 0; i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            cout<<twoDimentionMatrix[i][j]<<" ";
        }
    }   

    cout<<"\n\nColumn Major the Matrix: ";  
    for(int i = 0; i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            cout<<twoDimentionMatrix[j][i]<<" ";
        }
    }                          
    return 0;
}
