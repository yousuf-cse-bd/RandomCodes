/**
 * @file BuiltInMacros.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Five built-in in macros in ANSI C
 * @version 0.1
 * @date 2022-09-22
 * @since ThursDay; 10:43 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*__TIME__: A string containing current system time.*/
    cout<<"__TIME__: "<<__TIME__<<endl;

    /*__DATE__: A string containing current system date.*/
    cout<<"__DATE__: "<<__DATE__<<endl;

    /*__LINE__: An integer represent current line on the editor.*/
    cout<<"__LINE__: "<<__LINE__<<endl;

    /*__STDC__: Check whether an ANSI standard or not.*/
    cout<<"__STDC__: "<<__STDC__<<endl;

    /*__FILE__:A string containing the file name with extension*/
    cout<<"__FILE__: "<<__FILE__<<endl;

    return 0;
}
