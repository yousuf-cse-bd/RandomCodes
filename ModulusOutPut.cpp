/**
 * @file ModulusOutPut.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Modulus output will depend on first variable or operand.
 * @version 0.1
 * @date 2022-08-17
 * @since WednesDay; 01:39 AM 
 * @copyright Copyright (c) 2022
 * Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int m = 17 % 3;
    cout<<"First value and second value are positives: "<<m<<endl;
    m = 17 % (-3);
    cout<<"First value positive but second value negative : "<<m<<endl;
    m = -17 % 3;
    cout<<"First value negative but second value positive: "<<m<<endl;
    m = -17 % (-3);
    cout<<"First value and second value are negatives: "<<m<<endl;
    return 0;
}
