/**
 * @file SwitchWithEnumeration.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Enumeration and switch-case statement
 * @version 0.1
 * @date 2022-11-30
 * @since WednesDay; 11:17 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    enum Direction{
        left, right, up, down
    };
    Direction heading {up};
    switch (heading){
        case left:cout<<"Going left..."<<endl; break; /* case: 0*/
        case right: cout<<"Going rigit..."<<endl; break;/*case: 1*/
        case up: cout<<"Going up..."<<endl; break; /*case: 2*/
        case down: cout<<"Going down..."<<endl; break; /*case: 3*/
        default: cout<<"OK"<<endl; break;
    }

    return 0;
}
