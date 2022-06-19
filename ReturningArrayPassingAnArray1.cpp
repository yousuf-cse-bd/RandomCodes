#include <iostream>
using namespace std;

int *getArray(int * A)
{
    for(int i = 0; i<5; i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>A[i];
    }
    return A;
}

int main(int argc, char const *argv[])
{
    /* code */
    int *n;
    int A[5];
    n = getArray(A);
    cout<<"\nElement of Array Are: ";
    for(int i = 0; i<5; i++)
    {
        cout<<n[i]<<" ";
    }
    return 0;
}
