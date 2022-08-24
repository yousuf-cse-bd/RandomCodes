/**
 * @file InputNormalInstantBackPrint.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of Recursion: A String Input Reverse Using Recursion
 * @version 0.1
 * @date 2022-08-24
 * @since WednesDay; 10:28 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*Input a line and instant print the line*/
void stringReverse(void){
    char ch;
    if((ch  = getchar()) != '\n')
        stringReverse();
    putchar(ch);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Enter a string: ";
    stringReverse();
    return 0;
}
