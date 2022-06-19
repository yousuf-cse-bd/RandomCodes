/****
*@Author: Muhammad Yousuf Ali
*@Since: MonDay, 7 September 2020
*LargestValue From a Certain ArrayList
*/

#include <iostream>
using namespace std;

void largestValue(int A[], int n)
{
    int smallestValueIndex,largestValueIndex;
    smallestValueIndex = largestValueIndex = 0;
    int largestElement = A[0];
    int smallestElement = A[0];
    for(int i = 1;i<n;i++)
    {
        if(largestElement < A[i])
        {
            largestElement = A[i];
            largestValueIndex = i;
        }
        if(smallestElement > A[i])
        {
            smallestElement = A[i];
            smallestValueIndex = i;
        }
    }

    cout<<"Smallest Element =  "<<smallestElement<<"\tIndex: "<<smallestValueIndex<<endl;
    cout<<"Largest Element = "<<largestElement<<"\tIndex: "<<largestValueIndex<<endl;

}

int main(void)
{
    int n,largestElement;
    cout<<"Enter Nth Value Here: ";
    cin>>n;

    int A[n];
    for(int i = 0;i<n;i++)
    {
        cout<<"Index :"<<i<<"\tItem = ";
        cin>>A[i];
    }

    largestValue(A,n);
    return 0;
}
