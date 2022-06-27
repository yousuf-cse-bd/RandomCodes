/**
 * @file Passing2Darray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Passing 2 Dimensional array in C++
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

/*Specify the size of columns of 2D araary*/
void processArray1(int A[][4], unsigned int size){
    for(unsigned int i = 0; i<size; i++){
        for(unsigned int j = 0; j<size; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*Pass array containong pointers, 3 is array size*/
void processArray2(int *A[3]){
    for(unsigned int i = 0; i<3; i++){
        for(unsigned int j = 0; j<3; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*Pass a pointer to a pointer*/

void processArray3(int **A, unsigned int size){
    for(unsigned int i = 0; i<size; i++){
        for(unsigned int j = 0; j<size; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int size = 3;
    int A[size][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 0, 2, 1
    };
    processArray1(A, size);
    //when calling int * array[4];
    // int array[3][4];
    // for(unsigned int i = 0; i<3; i++){
    //     array[i] = new int[10];
    // }
    // processArray2(array);
    // cout<<"\n\n";
    /*Pass a pointer to a pointer*/
    // int **array;
    // array = new int*[10];
    // for(unsigned int i = 0; i<10; i++){
    //     array[i] = new int[10];
    // }
    // processArray3(array, 10);
    return 0;
}
