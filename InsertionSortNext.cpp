/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 29 July 2019
 */

#include <iostream>
using namespace std;

void insertionSortNext(int A[],int n)
{
    int i, j,tmp;
    for(i = 1 ; i < n; i++)
    {
        j = i;
        while (j>0 && A[j] < A[j-1])
        {
            tmp = A[j];
            A[j] = A[j-1];
            A[j-1] = tmp;
            j--;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n,i;
    cout<<"Enter nth Value Here: ";
    cin>>n;
    int A[n];
    i = 0;
    while (i<n)
    {
        cout<<"["<<i<<"]\tItem = ";
        cin>>A[i];
        i++;
    }
    insertionSortNext(A,n);
    cout<<"After Sorting Asccending Order..:"<<endl;
    for(i = 0; i<n;i++)
    {
        cout<<"["<<i<<"]\tItem = "<<A[i]<<endl;
    }
    return 0;
}