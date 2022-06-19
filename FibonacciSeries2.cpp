/*****
*@Author: Muhammad Yousuf Ali
*@Since: 16 March 2020
*/
#include <iostream>
using namespace std;
int i;
int main(void)
{
    int A[10];
    A[0] = 0;
    A[1] = 1;

    cout<<"0\t"<<A[0]<<endl;
    cout<<"1\t"<<A[1]<<endl;

    for(i = 2 ; i<10;i++)
    {
        // A[i] = A[i] + A[i];
        A[i] = A[i-2] + A[i-1];
        cout<<i<<"\t"<<A[i]<<endl;
    }

    return 0;
}