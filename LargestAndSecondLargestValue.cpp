#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout<<"Enter nth value here: ";
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cout<<"A["<<i<<"] = ";
        cin>>A[i];
    }

    int largestValue, secondLargestValue;
    largestValue = A[0];
    secondLargestValue = A[1];

    for(int i = 2; i<n; i++){
        if(A[i] > largestValue){
            // cout<<"If"<<endl;
            secondLargestValue = largestValue;
            largestValue = A[i];
        }
        else if(A[i] > secondLargestValue && A[i] != largestValue){
            // cout<<"Else if"<<endl;
            secondLargestValue = A[i];
        }
    }

    cout<<"Largest value = "<<largestValue<<"\nSecond largest value = "<<secondLargestValue<<endl;
    return 0;
}
