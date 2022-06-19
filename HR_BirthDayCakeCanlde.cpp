/*****
 * Birth Day Cake Candle
 * @Author: Muhammad Yousuf Ali
 * @Since: 01st March 2021 
 * 
 * sort function works only ascending order
 */

#include <iostream>
#include <algorithm>
using namespace std;

int i, j;

int birtdayCakeCandle(long long int A[], long long int n)
{
    int count = 0;
    sort(A, A + n);

    // for(i = 0; i<n ;i++)
    // {
    //     cout<<"Index: "<<i<<"\tItem = "<<A[i]<<endl;
    // }
    int tall = A[n-1];
    for(i = n-1 ; i>=0 ;i--)
    {
        if(tall == A[i])
        {
            count ++;
        }
    }

    return count;
}
int main(int argc, char const *argv[])
{
    long long int n;
    cin>>n;
    long long int candle[n];
    for(size_t i = 0; i<n; i++)
    {
        cin>>candle[i];
    }

   cout<<birtdayCakeCandle(candle, n)<<endl;
 

    return 0;
}
