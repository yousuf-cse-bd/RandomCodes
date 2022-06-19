#include <iostream>
using namespace std;

void swapArray(int * x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {10, 15};
    cout<<"A[0] = "<<A[0]<<"\t\tA[1] = "<<A[1]<<endl;
    swapArray(&A[0], &A[1]);
    cout<<"A[0] = "<<A[0]<<"\t\tA[1] = "<<A[1]<<endl;
    return 0;
}
