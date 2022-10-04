/**
 * @file BinarySearchWithRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Construction of binary search algorithm using recursion method
 * @version 0.1
 * @date 2022-10-04
 * @since TuesDay; 12:53 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Construction of binary search algorithm using recursion method.*/
void binarySearchAlgorithm(int *elements, int lowerIndex, int upperIndex, int xElement){
    int midIndex = lowerIndex + (upperIndex - lowerIndex)/2;

    if(lowerIndex > upperIndex){
        cout<<"Not Found...!"<<endl;
        return;
    }
    if(*(elements + midIndex) == xElement){
        cout<<"Found: "<<*(elements + midIndex)<<" and Index: "<<midIndex<<endl;
        return;
    }
    else if(*(elements + midIndex) < xElement){
        /*loweIndex = midIndex + 1 */
        binarySearchAlgorithm(elements, midIndex + 1, upperIndex, xElement);
    }else{ /*(elements + midIndex) > xElement*/
        /*upperIndex = midIndex - 1*/
        binarySearchAlgorithm(elements, lowerIndex, midIndex - 1, xElement);
    }  
}
/*Drive code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int n = 10;
    int elements[n];
    cout<<"Element are: ";
    for(unsigned int i = 0; i < n; i++){
        *(elements+i) = i+1;
        cout<<*(elements+i)<<" ";
    }
    cout<<endl;
    int lowerIndex, upperIndex, xElement;
    lowerIndex = 0, upperIndex = n-1;
    /*Test case passing from 0 to 12*/
    for(xElement = 0; xElement <= 12; xElement++){
        cout<<xElement<<" ";
        binarySearchAlgorithm(elements, lowerIndex, upperIndex, xElement);
    }
    return 0;
}
