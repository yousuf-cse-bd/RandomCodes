/**
 * @file ScientificNotation.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Comparing real number between normal and scientific notation
 * @version 0.1
 * @date 2023-01-10
 * @since TuesDay; 03:09 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    long double value1 {3e8};
    long double value2 {300000000};
    cout<<((value1 == value2)?"True":"False")<<endl;
    value1 = 0.123456789;
    value2 = 123.456789e-3;
    cout<<((value1 == value2)?"True":"False")<<endl;

    value1 = 300, value2 = 3.0e2;
    cout<<((value1 == value2)?"True":"False")<<endl;
    cout<<boolalpha;
    cout<<(value1 == value2)<<endl;
    value1 = 1.34e-10;
    value2 = 0.000000000134;
    cout<<(value1 == value2)<<endl;
    return 0;
}
