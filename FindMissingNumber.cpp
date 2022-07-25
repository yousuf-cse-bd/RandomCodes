/**
 * @file FindMissingNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Get missing number from array
 * @version 0.1
 * @date 2022-07-25
 * @since Monday, 11:16 AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

/*Find missing number in a given array*/
int getMissingNumber(int A[], unsigned int n){
    /*Compute XOR of all the element int the array*/
    int findMissinNumUsinXor = 0;
    for(unsigned int i = 0; i<n; i++){
        findMissinNumUsinXor = findMissinNumUsinXor ^ A[i];
       
    }
    // cout<<" Xor = "<<findMissinNumUsinXor<<endl;
    /*Compute XOR of all the element from 1 to (n+1)*/
    for(unsigned int i = 1; i<=n+1; i++){
        findMissinNumUsinXor = findMissinNumUsinXor ^ i;
        // cout<<i<<"\tXOR\t"<<findMissinNumUsinXor<<endl;
    }
    return findMissinNumUsinXor;
}

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int A[] = {9,4,5,8,6,1,7,2};
    unsigned int n = sizeof(A) / sizeof(int);

    cout<<getMissingNumber(A, n)<<endl;
    
    return 0;
}
