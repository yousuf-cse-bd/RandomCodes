/**
 * @file ReturnValueOfFunctionAsPpointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Full array return from user-defined function to main function
 * @version 0.1
 * @date 2022-09-23
 * @since FriDay; 10:04 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;

int *arrayElements(unsigned int n){
    int *A = (int*) calloc(n,sizeof(int));
    /*Random number is changed with each time*/
    srand(time(0));
    for(register unsigned int i = 0; i < n; i++){
        *(A+i) = rand() % n;
    }

    return A;
    free(A);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int n = 10, *pointer;
    pointer = arrayElements(n);
    cout<<"Array Elements: ";
    for(register unsigned int i = 0; i < n; i++){
        cout<<*(pointer+i)<<" ";
    }
    free(pointer);
    cout<<endl;
    return 0;
}
