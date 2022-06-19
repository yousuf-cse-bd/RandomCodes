/**
 * @file Reallocate.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int *ptr = (int*) malloc(sizeof(int));
    int *ptrA = (int*) calloc(10, sizeof(int));
    for(int i = 0; i<10; i++)
    {
        ptr[i] = i + 10;
    }

    for(int i = 0; i<10; i++)
    {
        cout<<ptr[i]<<" ";
    }

    cout<<"Again Assignment: "<<endl;
    for(int i = 0; i<20; i++)
    {
        ptr[i] = i+100;
        cout<<ptr[i]<<" ";
        ptrA[i] = ptr[i];
    }
    cout<<"\n\nCalloc: ";
    for(int i = 0; i<20; i++)
    {
        cout<<ptrA[i]<<" ";
    }

    ptr = (int*) realloc(ptr, 20);
    
    free(ptr);
    free(ptrA);
    ptr = NULL;
    ptrA = NULL;
    return 0;
}
