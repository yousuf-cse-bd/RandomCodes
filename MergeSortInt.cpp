/**
 * @file MergeSortInt.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implemented merge sort algorithm using a temp[] array with fixed valuse
 * @version 0.1
 * @date 2022-11-20
 * @since SunDay; 12:16 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

void mergeSortConquer(int *elements, const int lowerIndex, const int midIndex, const int upperIndex){
    /*i, j, k are index for left SubArray, rigth SubArray and tempList respectively*/
    int i, j, k;
    int tempList[upperIndex + 1];
    i = k = lowerIndex, j = midIndex + 1;
    /*Traversing the both array lists*/
    while(i <= midIndex && j <= upperIndex){
        /*Comparing the left sub array is less than right sub array for ascending order*/
        if(*(elements + i) <= *(elements + j)){
            *(tempList + k) = *(elements + i);
            k++, i++;
        }else{
            *(tempList + k) = *(elements + j);
            k++, j++;
        }
    }
    /*If remaining extra elements of left sub array*/
    while(i <= midIndex){
        *(tempList + k) = *(elements + i);
        k++, i++;
    }
    /*If remaining extra elements of right sub array*/
    while(j <= upperIndex){
        *(tempList + k) = *(elements + j);
        k++, j++;
    }
    /*Simple copy tempList to given list*/
    for(i = lowerIndex; i <= upperIndex; i++){
        *(elements + i) = *(tempList + i);
    }
}

void mergeSortDivided(int *elements, const int lowerIndex, const int upperIndex){
    if(lowerIndex < upperIndex){
        int midIndex = lowerIndex + (upperIndex - lowerIndex)/2;
        mergeSortDivided(elements, lowerIndex, midIndex);
        mergeSortDivided(elements, midIndex+1, upperIndex);
        mergeSortConquer(elements, lowerIndex, midIndex, upperIndex);
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int elements[] = {2, 1, 5, 4, 3, 0};
    const int size = sizeof(elements) / sizeof(int);
    mergeSortDivided(elements, 0, size-1);
    cout<<"The sorted elements: ";
    for(auto x : elements){ /*ForEach Loop*/
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
