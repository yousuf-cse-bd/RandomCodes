/**
 * @file QuickSortImplement.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implemented the quick sort algorithm with pointer natation
 * @version 0.1
 * @date 2022-11-20
 * @since SunDay; 11:29 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int partition(int *elements, const int leftIndex, const int rightIndex){
    int piviot = *(elements + leftIndex);
    int i, j;
    i = leftIndex, j = rightIndex;
    while(i < j){
        while(*(elements + i) <= piviot){
            i++;
        }
        while(*(elements + j) >piviot){
            j--;
        }
        if(i < j){
            swap(*(elements + i), *(elements + j));
        }
    }
    swap(*(elements + leftIndex), *(elements + j));
    return j;
}
void quickSort(int *elements, const int leftIndex, const int rightIndex){
    if(leftIndex < rightIndex){
        int j = partition(elements, leftIndex, rightIndex);
        quickSort(elements, leftIndex, j-1);
        quickSort(elements, j+1, rightIndex);
    }
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int elements[] = {9, 4, 3, 11, 15, 20, 2, 24, 30, 1, 35};
    cout<<"Before Sorting Operation: ";
    for(auto x: elements){
        cout<<x<<" ";
    }
    const int size = sizeof(elements) / sizeof(int);
    cout<<"\nAfter Sorting Operation: ";
    quickSort(elements, 0, size-1);
    for(auto x: elements){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
