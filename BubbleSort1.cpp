#include <iostream>
using namespace std;

void  bubbleSort(int n,int A[])
{
    int i,j;

    for(i = 0; i<n-1;i++)
    {
        for(j = i+1 ; j<n;j++)
        {
            if(A[i]>A[j])
            {
                swap(A[i],A[j]);
            }
        }
    }
}

int main(void)
{
    int n,i;
    cout<<"Enter Nth Value Here: ";
    cin>>n;

    int A[n];
    for(i = 0; i < n; i++)
    {
        cout<<"Index : "<<i<<"\tItem = ";
        cin>>A[i];
    }

    bubbleSort(n,A);

    cout<<"\n***After Sorting Performe.***"<<endl;
    for(i = 0; i<n;i++)
    {
        cout<<"Index : "<<i<<"\tItem = "<<A[i]<<endl;
    }

    return 0;
}

///C++ Programming All-in-One Tutorial Series (10 HOURS!)