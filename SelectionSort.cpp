//@Author: Muhammad Yousuf Ali
//@Since: 20 November 2019

#include <iostream>
using namespace std;

int main(void)
{
    int i, j, n;
    cout<<"Enter Nth = ";
    cin>>n;
    int A[n];

    for(i = 0; i<n ;i++)
    {
        cout<<"["<<i<<"] = ";
        cin>>A[i];
    }

    for(i = 0;i<n-1;i++)
    {
        for(j = i+1; j<n ;j++)
        {
            if(A[i]>A[j])
            {
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }

    for(i = 0; i<n ;i++)
    {
        cout<<"["<<i<<"] = "<<A[i]<<endl;
    }

    return 0;
}
