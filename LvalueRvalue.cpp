/**
 * @file LvalueRvalue.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief R-values are normally stay temporary memory
 * @version 0.1
 * @date 2023-01-20
 * @since FriDay; 11:14 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

inline const void myFunction(int &number){
    number = 10;
}
inline const void myFunction(int &&number){
    number = 101;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int number {5};
    myFunction(number); /*number is l-value*/
    cout<<number<<endl;
    myFunction(200); /*200 is r-value*/

    int x {100};
    int &lRef {x}; /*l-value reference*/
    lRef = 105; /*change x to 105*/
    cout<<x<<endl;

    int &&rRef = 200; /*r-value reference*/
    rRef = 300; /*change x to 200*/
    cout<<rRef<<endl;

    /*int &&xRef {x};*/ /*Compiler error*/

    return 0;
}
