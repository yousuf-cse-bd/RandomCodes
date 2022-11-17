/**
 * @file BinarySearchUsingLoop.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple binary search using loop iteration
 * @version 0.1
 * @date 2022-11-17
 * @since ThursDay; 10:37 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int binarySearch(int *elements, const unsigned int size, int x){
    int lowerIndex, midIndex, upperIndex;
    lowerIndex = 0, upperIndex = size - 1;
    while(lowerIndex <= upperIndex){
        midIndex = lowerIndex + (upperIndex - lowerIndex)/2;
        if(*(elements + midIndex) == x){
            return midIndex;
        }else if(*(elements + midIndex) < x){
            lowerIndex = midIndex + 1;
        }else{
            upperIndex = midIndex - 1;
        }
    }
    return -1; /* lowerIndex is greater than upperIndex*/
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned int size = 10;
    int elements[size];
    cout<<"The elements are: ";
    for(unsigned int i = 0; i != size; i++){
        *(elements + i) = i + 1;
        cout<<*(elements + i)<<" ";
    }
    cout<<endl;
    /*We can not decalared x = any negative value couse of size is possitive value*/
    for(int x = 0; x <= size + 2; x++){
        int midIndex = binarySearch(elements, size, x);
        (midIndex != -1)?cout<<"\tThe "<<x<<" is found its index "<<midIndex<<endl:
        cout<<"\tThe "<<x<<" is not found..!"<<endl;
    }
    return 0;
}
