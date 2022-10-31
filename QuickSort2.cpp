/**
 * @file QuickSort2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief To sort random array using qsort given function
 * @version 0.1
 * @date 2022-10-31
 * @since MonDay; 09:52 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b); /*Firstly type-casting to int then de-reference*/
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned int size = 10;
    unsigned int elementSet[size];
    srand(time(0));
    cout<<"Unsorted element are: ";
    for(unsigned int i = 0; i < size; i++){
        *(elementSet + i) = rand() % size;
        cout<<*(elementSet + i)<<" ";
    }
    cout<<endl;

    qsort(elementSet, size, sizeof(unsigned int), compare);
    cout<<"Sorted elements are: ";
    for(unsigned int x : elementSet){ /*For each loop*/
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
