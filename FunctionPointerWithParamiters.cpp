/**
 * @file FunctionPointerWithParamiters.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function pointer using wrapper-function
 * @version 0.1
 * @date 2023-03-02
 * @since ThursDay; 09:00 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
/*It does not support const '*' || '&'*/
int getMin(int number1, int number2){
    return (number1 < number2)?number1:number2;
}

int getMax(int number1, int number2){
    return (number1 > number2)?number1:number2;
}

constexpr int wrapperFuncton(const int &number1, const int &number2, int (*ptrFunction)(int, int)){
    return (*ptrFunction)(number1, number2);
}

int main(int argc, const char *const argv[]){
    cout<<"Get Min: "<<wrapperFuncton(5, 6, getMin)<<endl;
    cout<<"Get Max: "<<wrapperFuncton(5, 6, getMax)<<endl;
    cout<<"HappyEnding..."<<endl;
    return 0;
}