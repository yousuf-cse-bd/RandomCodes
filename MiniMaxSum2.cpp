/*****
 * Program: Mini Max Sum
 * @Author: MuhammadYousufAli
 * @Since: 20 February 2021
 */

#include <iostream>
using namespace std;

void miniMaxSum(int A[])
{
    long long max1, min1, sum = 0;
    max1 = A[0];
    min1 = A[0];
    for (size_t i = 0; i < 5; i++)
    {
        sum += A[i];

        if (A[i] < min1)
        {
            min1 = A[i];
        }
        if(A[i] > max1)
        {
            max1 = A[i];
        }
    }

    cout<<sum - max1 <<" "<<sum - min1<<endl; 
}

int main()
{
    int A[5];
    for (size_t i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    miniMaxSum(A);

    return 0;
}