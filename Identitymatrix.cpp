///Identity Matrix;

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int rowColumn;
    cout<<"Enter RowColumn value Here: ";
    cin>>rowColumn;

    int identityMatrix[rowColumn][rowColumn];

    int i,j;

    ///Logic
    cout<<"\n\nYour Identity Matrix:["<<rowColumn<<"x"<<rowColumn<<"]"<<endl;
    for(i = 0;i<rowColumn;i++)
    {
        for(j = 0; j<rowColumn;j++)
        {
            if(i == j)
            {
                identityMatrix[i][j] = 1;
            }
            else
            {
                identityMatrix[i][j] = 0;
            }
            cout<<identityMatrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
