#include <iostream>
using namespace std;

// It is double return valu from single function

void getMinMax(int A[], int size, int* min, int* max)
{
    for(int i = 1; i<size; i++)
    {
        if(*min > A[i])
        *min = A[i];
        if(*max < A[i])
        *max = A[i];
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {4, 5, -2, 29, 52, 35, -5, 0};
    int size = sizeof(A) / sizeof(int);

    int min, max;
    min = max = A[0];

    getMinMax(A, size, &min, &max);
    cout<<"Min Value: "<<min<<"\t\tMax Value: "<<max<<endl;
    return 0;
}
