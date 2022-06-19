#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for(i = 0; i<10-2; i++)
    {
        if(A[i] % 2 == 1)
        {
            cout<<A[i]<<", ";
        }
    }
    if(A[8] % 2 == 1)
    {
        cout<<A[8]<<"\n";
    }

    for(i = 0; i<10-2; i++)
    {
        if(A[i] % 2 == 0)
        {
            cout<<A[i]<<", ";
        }
    }
    if(A[9] % 2 == 0)
    {
        cout<<A[9]<<"\n";
    }

    return 0;
}
