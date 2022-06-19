/****
*@Author: Muhammad Yousuf Ali
*@Since: MonDay, 7 September 2020
*Second LargestValue From a Certain ArrayList
*/

#include <iostream>
using namespace std;

void bubbleSortAscOrder(int A[],int n)
{
    int i,j;
    for(i = 1;i<n;i++)
    {
        for(j = 0;j<n-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
            }
        }
    }
}

int secondLargestValue(int A[], int n)
{
    int secondLargestValue1 = A[0];
    for(int i = 0; i<n-1;i++)
    {
        if(secondLargestValue1 < A[i])
        {
            secondLargestValue1 = A[i];
        }
    }

    return secondLargestValue1;
}
int main(void)
{
    int n,i;
    cout<<"Enter Nth Here: ";
    cin>>n;

    int A[n];
    for(i = 0; i< n;i++)
    {
        cout<<"Index: "<<i<<"\tItem = ";
        cin>>A[i];
    }
    bubbleSortAscOrder(A,n);
    int secsecondLargestValue_now = secondLargestValue(A,n);
    cout<<"\nThe Second Largest Value = "<<secsecondLargestValue_now<<endl;
    return 0;
}
