#include <iostream>
using namespace std;

void secondLargestElement(int A[], int n)
{
    int firstLargest = A[0];
    int secondLargest = A[1];

    int index = -1;

    for(int i = 2; i<n; i++)
    {
        if(A[i] > firstLargest)
        {
            secondLargest = firstLargest;
            index = i;
            firstLargest = A[i];
        }
        else if(A[i] > secondLargest && A[i] < firstLargest)
        {
            secondLargest = A[i];
            index = i;
        }
    }

    if(firstLargest == secondLargest)
    cout<<"No Second Largest Value...!"<<endl;
    else if(firstLargest != secondLargest)
    cout<<"The Second Largests Value: "<<secondLargest<<"\t & Index: "<<index<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout<<"Enter nth value here: ";
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>A[i];
    }

    secondLargestElement(A, n);

    

    return 0;
}
