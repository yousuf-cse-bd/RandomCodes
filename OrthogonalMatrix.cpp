///Orthogonal Matrix

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int i,j,k;
    int rowColumn;
    cout<<"Enter Row n Column Value for Square Matrix: ";
    cin>>rowColumn;
    cout<<"\nEnter All Elements for: "<<rowColumn<<"x"<<rowColumn<<"]:"<<endl;
    int M[rowColumn][rowColumn];
    for(i = 0; i<rowColumn; i++)
    {
        for(j = 0; j<rowColumn; j++)
        {
            // cout<<"["<<i<<","<<j<<"] = ";
            cin>>M[i][j];
        }
    }

    cout<<"Given matrix:"<<endl;
    for(i = 0; i<rowColumn; i++)
    {
        for(j = 0; j<rowColumn ; j++)
        {
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }

    int MT[rowColumn][rowColumn];
    cout<<"\nTransport Matrix:"<<endl;
    for(i = 0; i<rowColumn ; i++)
    {
        for(j = 0; j<rowColumn; j++)
        {
            MT[i][j] = M[j][i];
            cout<<MT[i][j]<<"\t";
        }
        cout<<endl;
    }

    int sum = 0;
    int identityMatrix[rowColumn][rowColumn];

    ///Logic
    for(i = 0; i < rowColumn; i++)
    {
        for(j = 0; j<rowColumn; j++)
        {
            for(k = 0; k<rowColumn; k++)
            {
                sum = sum + MT[i][k]*M[k][j];
            }
            identityMatrix[i][j] = sum;
            sum = 0;
        }
    }

    cout<<"***Final Result Identity Matrix***"<<endl;
    for(i = 0; i<rowColumn; i++)
    {
        for(j = 0; j<rowColumn ; j++)
        {
            cout<<identityMatrix[i][j]<<"\t";
        }
        cout<<endl;
    }


    return 0;
}
