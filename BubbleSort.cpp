//@Author: Muhammad Yousuf Ali
//@Since: 20 November 2019

#include <iostream>
using namespace std;

int main(void)
{
    int i, j, n;
    int tmp;
    cout<<"Enter Nth = ";
    cin>>n;
    int A[n];

    for(i = 0; i<n ;i++)
    {
        cout<<"["<<i<<"] = ";
        cin>>A[i];
    }

    for(i = 0;i<n - 1;i++)
    {
        for(j = 0; j<n - i - 1 ;j++)
        {
            if(A[j]>A[j+1])
            {
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }

    cout<<endl;
    for(i = 0; i<n ;i++)
    {
        cout<<"["<<i<<"] = "<<A[i]<<endl;
    }

    return 0;
}

