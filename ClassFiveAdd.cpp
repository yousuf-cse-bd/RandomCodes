/**
 * @file ClassFiveAdd.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;


void addNumbers(int upperValue, int lowerValue){
    int carray = 0;
    int digitWise1, digitWise2;
    unsigned int sum = 0;
    while(upperValue != 0 && lowerValue != 0){
        digitWise1 = upperValue % 10;
        digitWise2 = lowerValue % 10;
        // cout<<"D1 = "<<digitWise1<<" ";
        // cout<<"D2: "<<digitWise2<<" ";

        upperValue /= 10;
        lowerValue /= 10;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    int upperValue = 891;
    int lowerValue = 19;
    // sum = 110
    addNumbers(upperValue, lowerValue);
    return 0;
}
