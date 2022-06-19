/**
 * @file MaximumArray.cpp
 * @author your name (you@domain.com)
 * @brief Given N numbers, find the one that is of the highest value and print it.
 * @version 0.1
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int maximum(int A[], int n)
{   
    int mx = A[0];
    for(int i = 1; i<n; i++)
    {
        mx = max(mx, A[i]);
    }
    return mx;
}
int main(int argc, char const *argv[])
{
    /* code */
    int N;
    cin>>N;
    
    int A[N];
    for(int i = 0; i<N;i++)
    {
        cin>>A[i];
    }
    cout<<maximum(A, N)<<endl;
    return 0;
}
