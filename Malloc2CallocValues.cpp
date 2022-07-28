/**
 * @file Malloc2CallocValues.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Malloc elemnet to load calloc dynamic alloaction
 * @version 0.1
 * @date 2022-07-28
 * @since ThursDay; 9:02 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int *mallocPtr = (int*) malloc(5*sizeof(int));
    int *callocPtr = (int*) calloc(5,sizeof(int));

    /*Load 5 elements into mallocPtr*/
    /*Re-assigning malloc to calloc*/
    for(unsigned int i = 0; i<5; i++){
        *(mallocPtr + i) = i+100;
        *(callocPtr + i) = *(mallocPtr + i);
    }
    /*Print*/
    for(unsigned int i = 0; i<5; i++){
        cout<<"From Malloc: "<<*(mallocPtr + i)<<endl;
        cout<<"From Calloc: "<<*(callocPtr + i)<<endl;
    }

    long double * callocPointer = (long double*) calloc(2, sizeof(long double));
    long double *mallocPointer = (long double*) malloc(2*sizeof(long double));

    callocPointer[0] = 2.718281828459045;
    callocPointer[1] = 3.141592653589793238;

    mallocPointer[0] = callocPointer[0];
    mallocPointer[1] = callocPointer[1];

    cout<<"From Calloc: "<<mallocPointer[0]<<"\tFrom Malloc: "<<mallocPointer[0]<<endl;
    cout<<"From Calloc: "<<mallocPointer[1]<<"\tFrom Malloc: "<<mallocPointer[1]<<endl;

    return 0;
}
