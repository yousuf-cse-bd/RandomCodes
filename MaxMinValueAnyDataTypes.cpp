/**
 * @file MaxMinValueAnyDataTypes.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find max or min values using template function
 * @version 0.1
 * @date 2023-01-28
 * @since SaturDay; 12:33 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <typename dataType> constexpr void maxValue (const dataType &var1, const dataType &var2, dataType &result){
    result = (var1 > var2)?var1:var2;
}

template <typename dataType> constexpr void minValue (const dataType &var1, const dataType &var2, dataType &result){
    result = (var1 < var2)?var1:var2;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int var1 {110}, var2 {15}, resultInt;
    maxValue(var1, var2, resultInt);
    cout<<"Max (int) value : "<<resultInt<<endl;

    double inDouble1 {3.157}, inDouble2{15.5}, resultDouble;
    maxValue(inDouble1, inDouble2, resultDouble);
    cout<<"Max (double) value: "<<resultDouble<<endl;

    string str1 {"ABC"}, str2 {"abc"}, resultString;
    minValue(str1, str2, resultString);
    cout<<"Min (string) value: "<<resultString<<endl;

    
    maxValue(str1, str2, resultString);
    cout<<"Max (string) value: "<<resultString<<endl;

    return 0;
}
