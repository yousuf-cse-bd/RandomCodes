#include <iostream>
using namespace std;

int secondLargestElement(int A[], int n)
{
    int resultIndex,  largest;
    resultIndex = -1, largest = 0;
    for(int i = 1; i< n; i++)
    {
        //Compare Main array and let array
        if(A[i] > A[largest])
        {
            //update result index with largest value
            resultIndex = largest;
            largest = i;
            // cout<<resultIndex<<" @ "<<i<<endl;
        }
        else if(A[i] != A[largest]) // not equal to given array and largest value
        {
            // cout<<resultIndex<<" * "<<i<<endl;
            if(resultIndex == -1 || A[i] > A[resultIndex]) // comparing given array and expected value
            resultIndex = i;
        }
    }
    return resultIndex;
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {5,-1,12, 3, 4, 0,7, 9};
    int n = sizeof(A) / sizeof(int);
    int result = secondLargestElement(A, n);

    cout<<"The Second Largest Value: A["<<result<<"] = "<<A[result]<<endl;
    return 0;
}
