#include <iostream>
using namespace std;

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

    int smallestValue, secondSmallestValue;
    smallestValue = A[0];
    secondSmallestValue = A[1];

    for(int i = 2; i<n; i++)
    {
        if(A[i] < smallestValue)
        {
            // cout<<"If"<<endl;
            secondSmallestValue = smallestValue;
            smallestValue = A[i];
        }
        else if(A[i] < secondSmallestValue && A[i] > smallestValue)
        {
            // cout<<"Else if"<<endl;
            secondSmallestValue = A[i];
        }

    }

    cout<<"Second Smallest Value: "<<secondSmallestValue<<endl;
    cout<<"First Smallest Value: "<<smallestValue<<endl;
    return 0;
}
