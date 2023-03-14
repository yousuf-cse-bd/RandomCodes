/**
 * @file SquareMacros2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief We have to be careful with macros.
 * @version 0.1
 * @date 2023-03-14
 * @since TuesDay; 04:30 PM
 * @copyright Copyright (c) 2023
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
 /*Don't use mactros with arguments in your code*/
#include <iostream>
#define SQUARE(value) ((value) * (value))
using namespace std;

int main(int argc, const char *const argv[]){
    int result{SQUARE(5)}; /*Expect 25*/
    cout<<"Expect result: "<<result<<endl;
    result = ((5)*(5)); /*still get 25*/
    cout<<"Get result: "<<result<<endl;
    cout<<"------------------------------------"<<endl;
    result = 100 / SQUARE(5); /*Expect 4*/
    cout<<"Expect result: "<<result<<endl;
    result = 100/((5) *(5));/*Get 100!!!*/
    cout<<"Get result: "<<result<<endl;
    return 0;
}