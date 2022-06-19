// C++ program to find third largst element
// in an array distinct elements

#include <iostream>
#include <climits>
using namespace std;

void thirdLargetstElement(int A[], int size)
{
    /*There should be atleast 3 elements.*/
    if(size < 3)
    {
        cout<<"Invalid Input...!"<<endl;
        return;
    }
    // Find First Largets Element
    int first = A[0];
    for(int i = 1; i<size; i++)
    {
        if(A[i] > first)
        first = A[i];
    }

    // Find Second largest element
    int second = INT_MIN;
    for(int i = 0; i<size; i++)
    {
        if(A[i] > second && A[i] < first)
        second = A[i];
    }
    //Find third largest element
    int third = INT_MIN;
    for(int i = 0; i< size; i++)
    {
        if(A[i]>third && A[i] < second)
        third = A[i];
    }

    cout<<"The third Largest element is "<<third<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {12, 13, 1, 10, 34, 16};
    int size = sizeof(A) / sizeof(int);
    thirdLargetstElement(A, size);
    return 0;
}
