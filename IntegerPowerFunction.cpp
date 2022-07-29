/**
 * @file IntegerPowerFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Igonore pow() function for precision value
 * @version 0.1
 * @date 2022-07-29
 * @since FriDay; 6:18 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int x = pow(2, 4);
    cout<<x<<endl;

    unsigned int temp = 1;
    unsigned int base = 2, power = 4;
    for(unsigned int i = 1; i<=power; i++){
        temp = temp * base;
        // cout<<temp<<endl;
    }
    cout<<temp<<endl;
    
    return 0;
}
