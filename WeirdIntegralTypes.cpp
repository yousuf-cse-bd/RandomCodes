/**
 * @file WeirdIntegralTypes.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Integral types less than 4 bytes in size don't support arithmetic operations
 * @version 0.1
 * @date 2023-01-12
 * @since ThursDay; 
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

const char *const byteOrBytes(const unsigned int size){
    if(size == 1){
        return " Byte.";
    }else{
        return " Bytes.";
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr char var1 {65}, var2 {1}; /*1 bytes*/
    constexpr signed short int var3 {10}, var4 {20}; /*2 bytes*/
    constexpr unsigned short int var5 {20}, var6 {32}; /*2 bytes*/

    cout<<"The size of <char> type variable: "<<sizeof(var1)<<byteOrBytes(sizeof(var1))<<endl;
    cout<<"The size of <signed short int> type variable: "<<sizeof(var3)<<byteOrBytes(sizeof(var3))<<endl;
    cout<<"Size of <unsigned short int> type variable: "<<sizeof(var5)<<byteOrBytes(sizeof(var5))<<endl;

    /*There are transforme implicitly behind the scenes*/
    constexpr auto charResult {var1 + var2}; /*4 bytes*/
    constexpr auto signedShortIntResult {var3 - var4}; /*4 bytes*/
    constexpr auto unsignedShortIntResult {var3 * var4}; /*4 bytes*/

    cout<<"The size of <charResult>: "<<sizeof(charResult)<<byteOrBytes(sizeof(charResult))<<endl;
    cout<<"The size of <signedShortIntResult>: "<<sizeof(signedShortIntResult)<<byteOrBytes(sizeof(signedShortIntResult))<<endl;
    cout<<"The size of <unsignedShortIntResult>: "<<sizeof(unsignedShortIntResult)<<byteOrBytes(sizeof(unsignedShortIntResult))<<endl;

    constexpr short var7 {4}, var8 {8};
    constexpr auto leftShiftResult {var7 << 1}, rightShiftResult {var8 >> 1};

    cout<<"The size of <short>: "<<sizeof(var7)<<byteOrBytes(sizeof(var7))<<endl;
    cout<<"The size of <leftShiftResult>: "<<sizeof(leftShiftResult)<<byteOrBytes(sizeof(leftShiftResult))<<endl;
    cout<<"The size of <rightShiftResult>: "<<sizeof(rightShiftResult)<<byteOrBytes(sizeof(rightShiftResult))<<endl;

    return 0;
}
