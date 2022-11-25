/**
 * @file IntDouble.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Integer variable does not take fraction value, and fraction part goes to double
 * @version 0.1
 * @date 2022-11-25
 * @since FriDay; 05:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int number1;
    double number2;
    cout<<"Enter two number value here: ";
    cin>>number1>>number2;
    cout<<"Integer part: "<<number1<<"\tDecimal part: "<<number2<<endl;
    return 0;
}
