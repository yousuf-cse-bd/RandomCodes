#include <iostream>
using namespace std;

int main()
{
    int i,j,x;
    x = 9;
    int A[6][6];
    for(i = 0;i<6;i++)
    {
        for(j = 0;j<6;j++)
        {
            ++x;

            A[i][j]=x;
        }
    }

    for(i = 0;i<6;i++)
    {
        for(j = 0;j<6;j++)
        {
            if(i>0 && i<6-1 && j>0 &&j <6-1)
            {
                cout<<" 0 ";
            }
            else
            {
                cout<<A[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
