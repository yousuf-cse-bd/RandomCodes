/**
 * @file SortDynamicArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sorting dynamic array using built in sorting statement
 * @version 0.1
 * @date 2022-08-02
 * @since Tuesday; 12: 19 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int n;
    cout<<"Enter nth value here: ";
    cin>>n;
    n = (n < 0)? n*(-1):n;
    
    int *A = (int*) calloc(n,sizeof(int));
    for(unsigned int i = 0; i<n; i++){
        A[i] = i+1;
    }
    /*Sorting in descending order*/
    sort(A, A + n, greater<int>());
    for(unsigned int i = 0; i<n; i++){
        cout<<"["<<i<<"] = "<<A[i]<<endl;
    }
    free(A);
    return 0;
}