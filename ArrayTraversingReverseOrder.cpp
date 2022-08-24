/**
 * @file ArrayTraversingReverseOrder.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of Recursion: Array Traversing Reverse Order Using Recursion
 * @version 0.1
 * @date 2022-08-24
 * @since WednesDay; 07:46 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

void reverseOrder(int A[], unsigned int n){
    if(n == 0){
        cout<<"Index: ["<<n<<"]\tElement: "<<A[n]<<endl;
        return;
    }
    else{
        cout<<"Index: ["<<n<<"]\tElement: "<<A[n]<<endl;
        reverseOrder(A, n-1);
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int A[10];
    for(unsigned i = 0; i<10; i++){
        A[i] = i+1;
    }
    reverseOrder(A, 10-1);
    return 0;
}
