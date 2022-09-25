/**
 * @file PascalPatternSumOfRowth.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The sum of values in the nth row is 2^n
 * @version 0.1
 * @date 2022-09-25
 * @since SunDay; 01:13 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int rowTh;
    cout<<"Enter rowTh value here: ";
    cin>>rowTh;
    long long unsigned int sum = 1;
    for(unsigned short int n = 1; n<=rowTh; n++){
        sum *= 2;
    }
    cout<<"Sum "<<sum<<" of the values of "<<rowTh<<" Row."<<endl;
    return 0;
}
