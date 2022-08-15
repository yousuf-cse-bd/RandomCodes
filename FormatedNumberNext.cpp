/**
 * @file FormatedNumberNext.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Read an integer variable and print it in which the digits are separated into groups of three by commas.
 * @version 0.1
 * @date 2022-08-16
 * @since TuesDay; 12:29 AM
 * @copyright Copyright (c) 2022
 * Varendra University, Rajhahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    string givenNmuber;
    givenNmuber = "1171123";
    unsigned int len = givenNmuber.length();
    for(unsigned int i = 0; i<len; i++){
        if((len - i) % 3 == 0){
            cout<<',';
        }
        cout<<givenNmuber[i];
    }
    return 0;
}
