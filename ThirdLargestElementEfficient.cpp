// C++ program to find third
// largest element in an array

#include <iostream>
using namespace std;

void thirdLargetstElement(int A[], int size)
{
    /*There should be atleast three element*/
    if(size < 3)
    {
        cout<<"Invalid Input...!"<<endl;
        return;
    }

    //Initialize first, second, third largest element
    int firstLargest, secondLargest, thirdLargesgt;
    firstLargest = A[0];
    secondLargest = thirdLargesgt = INT_MIN;

    // Traverse array elements to find the third Largest
    for(int i = 0; i< size; i++)
    {
        /*
        If current element is greater than first,
        then update first, second and third
        */
       if(A[i] > firstLargest)
       {
           thirdLargesgt = secondLargest;
           secondLargest = firstLargest;
           firstLargest = A[i];
       }
       /*
        If [i] is between first and second
       */
        else if (A[i] > secondLargest)
        {
            thirdLargesgt = secondLargest;
            secondLargest = A[i];
        }
        /*
        If A[i] is between second and third
        */
       else if (A[i] > thirdLargesgt)
       {
           thirdLargesgt = A[i];
       }
       
    }

    cout<<"The third Largest element is "<<thirdLargesgt<<endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {12, 13, 1, 10, 34, 16};
    int size = sizeof(A) / sizeof(int);
    thirdLargetstElement(A, size);
    return 0;
}
