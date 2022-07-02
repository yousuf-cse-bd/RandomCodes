/**
 * @file ArrayElementSwaping.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
void arrayElementSwap(int A[], unsigned int n){
    for(int i = 0, j = n-1; i<n/2; j--, i++){
        int temp = A[i];
        A[i] =  A[j];
        A[j] = temp;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    unsigned int n = sizeof(A) / sizeof(int);
    arrayElementSwap(A, n);
    
    for(auto x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
