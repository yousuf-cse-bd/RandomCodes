/**
 * @file SquareMacros1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief We have to be careful with macros
 * @version 0.1
 * @date 2023-03-14
 * @since TuesDay; 04:30 PM
 * @copyright Copyright (c) 2023
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#define SQUARE(value) value * value
using namespace std;

int main(int argc, const char *const argv[]){
    int result{SQUARE(5)}; /*Expect 25*/
    cout<<result<<endl; /*get 25*/

    result = 100 / SQUARE(5); /*Expect 4*/
    cout<<result<<endl; /*Get 100!!!*/
    return 0;
}