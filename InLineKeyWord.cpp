/**
 * @file InLineKeyWord.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Inline function with inline-key-word, but not mandatory declared inline key-word
 * @version 0.1
 * @date 2022-12-09
 * @since FriDay; 11:21 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

inline int add(int number1, int number2){
    return (number1 + number2);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    cout<<add(10, 20)<<endl;
    return 0;
}
