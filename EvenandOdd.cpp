/**
 * @file EvenandOdd.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sorting elements by odd and even separately
 * @version 0.1
 * @date 2019-07-31
 * @since WednesDay; 10:10 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*Impelementing optimal bubble sort ascending oorder*/
void bubleSort(int *A, unsigned int size){
    bool swapStatus = true;
    for(unsigned int i = 0; i < size - 1 && swapStatus == true; i++){
        swapStatus = false;
        for(unsigned int j = 0; j < size - (i+1); j++){
            if(*(A+j) > *(A+j+1)){
                swap(*(A+j), *(A+j+1));
                swapStatus = true;
            }
        }
    }
}
void evenSort(int *even, unsigned int size){
    bubleSort(even, size);
    cout<<"Even Elements Below:"<<endl;
    for(unsigned int i = 0; i<size; i++){
        cout<<*(even+i)<<" ";
    }
    cout<<endl;
}
void oddSort(int *odd, int size){ 
    bubleSort(odd, size);
    cout<<"Odd Elements Below:"<<endl;
    for(int i = size - 1; i>=0; i--){
        cout<<*(odd+i)<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[]){
    system("cls");
    int testCase, increment, element;
    unsigned int i = 0, j = 0;
    cout<<"Enter Nth Here: ";
    cin>>testCase;

    int *even = (int*)malloc(sizeof(int));
    int *odd = (int*)malloc(sizeof(int));

    increment = 1;
    while(increment <= testCase){
        cout<<"Enter Element Here: ";
        cin>>element;
        if(element % 2 == 0){
            *(even+i) = element;
            cout<<"Even: ["<<increment<<"] = "<<*(even+i)<<endl;
            i++;
        }
        else{
            *(odd+j) = element;
            cout<<"Odd: ["<<increment<<"] = "<<*(odd+j)<<endl;
            j++;
        }
        increment++;
    }
    evenSort(even, i);
    oddSort(odd, j);
    free(even);
    free(odd);
    return 0;
}
