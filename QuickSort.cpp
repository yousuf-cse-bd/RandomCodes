/**
 * @file QuickSort.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Quick sort is an example as function pointer 
 * @version 0.1
 * @date 2022-09-23
 * @since FriDay; 09:39 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;
/*Consider as ascending order*/
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b );
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int size = 10;
    int *A = new int[size];
    srand(time(0));
    int randomNumber;
    cout<<"Before sorting: ";
    for(register unsigned int i = 0; i < size; i++){
        randomNumber = rand() % size;
        *(A+i) = randomNumber;
        cout<<*(A+i)<<" ";
    }
    qsort(A, size, sizeof(int), compare);
    cout<<"\nAfter sorting: ";
    for(register unsigned int i = 0; i < size; i++){
        cout<<*(A+i)<<" ";
    }
    cout<<endl;
    delete A;
    return 0;
}
