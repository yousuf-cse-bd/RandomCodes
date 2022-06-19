#include <iostream>
using namespace std;


//large part
void largeSegment(int A[], int n)
{
    int firstLargeValue, secondLargeValue;
    firstLargeValue = A[0],  secondLargeValue = A[1];

    for(int i = 2; i<n; i++)
    {
        if(A[i] > firstLargeValue)
        {
            secondLargeValue = firstLargeValue;
            firstLargeValue = A[i];
        }
        else if(A[i] > secondLargeValue && A[i] < firstLargeValue)
        secondLargeValue = A[i];
    }

    cout<<"First Largets Value: "<<firstLargeValue<<endl;
    cout<<"Second Largest Value: "<<secondLargeValue<<endl;
}

// small part
void smallSegment(int A[], int n)
{
    int firstSmallValue = A[0];
    int secondSmallValue = A[1];

    for(int i = 2; i<n ; i++)
    {
        if(A[i] < firstSmallValue)
        {
            secondSmallValue = firstSmallValue;
            firstSmallValue = A[i];
        }
        else if(A[i] < secondSmallValue && A[i] > firstSmallValue)
        secondSmallValue = A[i];
    }

    cout<<"First Smallest Value: "<<firstSmallValue<<endl;
    cout<<"Second Smallest Value: "<<secondSmallValue<<endl;
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

    largeSegment(A, n);
    cout<<"\n";
    smallSegment(A, n);
    return 0;
}

