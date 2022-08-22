/**
 * @file BinaryToDecimalViceVersa.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Conversion: Binary number to Decimal number ViceVersa
 * @version 0.1
 * @date 2022-08-22
 * @since MonDay; 07:52 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <algorithm>
using namespace std;

int decimalToBinaryNumber(unsigned int decimalNumber){
    string binaryString = "";
    unsigned int binaryDigit;
    while(decimalNumber != 0){
        binaryDigit = decimalNumber % 2;
        binaryString = binaryString.append(to_string(binaryDigit));
        decimalNumber /= 2; 
    }
    /*Reverse the string*/
    reverse(binaryString.begin(), binaryString.end());
    /*stoi(): String to int*/
    return (stoi(binaryString));
}

unsigned int binaryToDecimalNumber(unsigned int binaryNumber){
    unsigned int decimalDigit, decimalNumber, base;
    decimalDigit = decimalNumber = base = 0;
    /*Until loop run BinaryNumber not zero*/
    while(binaryNumber != 0){
        decimalDigit = binaryNumber % 10;
        /*Remeber: just decimal Digit is processing left-shift(Precidense: Right to left)*/
        decimalNumber += (decimalDigit << base ++);
        binaryNumber /= 10;
    }
    return decimalNumber;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int binaryNumber = 1110;
    unsigned int decimalNumber = binaryToDecimalNumber(binaryNumber);
    cout<<"Decimal Number: "<<decimalNumber<<endl;
    binaryNumber = decimalToBinaryNumber(decimalNumber);
    cout<<"Binary Number: "<<binaryNumber<<endl;
    return 0;
}
