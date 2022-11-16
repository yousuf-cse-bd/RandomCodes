/**
 * @file BinarySearchRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Binary search algorithm using recursion function with sorted elements
 * @version 0.1
 * @date 2022-11-16
 * @since WednesDay; 11:53 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
int binarySearch(int *elements, short int lower, short int upper, int x){ /*Don't is here unsigned data-type*/
    int mid = lower + (upper - lower)/2;
    if(lower > upper){
        return -1;
    }else if (*(elements + mid) == x){
        return mid;
    }else if(*(elements + mid) < x){
        return binarySearch(elements, ++mid, upper, x); /*In recursion function must be prefix*/
    }else{
        return binarySearch(elements, lower, --mid, x); /*In recursion function must be prefix*/
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned short int size = 10;
    int elements[size];
    cout<<"The element are: ";
    for(unsigned short int i = 0; i != size; i++){
        *(elements + i) = i + 1;
        cout<<*(elements + i)<<" ";
    }
    cout<<endl;
    
    unsigned short int lower, upper;
    lower = 0, upper = size - 1;

    int index, x;
    // cout<<"\tEnter an element here: ";
    // cin>>x;
    for(x = -1; x <= 12; x++){
        index = binarySearch(elements, lower, upper, x);
        (index != -1)?cout<<x<<" is found and its index: "<<index<<endl:
        cout<<x<<" is not found..!"<<endl;
    }
    return 0;
}
