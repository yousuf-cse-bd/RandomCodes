/**
 * @file ldivFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate: Quotient, Remainder from numerator and denominator
 * @version 0.1
 * @date 2022-08-25
 * @since ThursDay; 10:37 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ldiv_t ouput;
    ouput = ldiv(100000L, 30000L);
    cout<<"Quotient: "<<ouput.quot<<endl;
    cout<<"Remainder: "<<ouput.rem<<endl;
    long long quot = 100000L / 30000L;
    cout<<"Qout: "<<quot<<endl;
    long long int rem = 100000L % 30000L;
    cout<<"Rem: "<<rem<<endl;
    return 0;
}
