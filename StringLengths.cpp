/**
 * @file StringLengths.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief String length calculation in various methods
 * @version 0.1
 * @date 2022-09-10
 * @since SaturDay; 11:30 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char *line = "Muhammad Yousuf Ali";
    string line2 = line;
    // char line3[] = "Home Computing Group";
    cout<<"String Size: "<<line2.size()<<endl;
    cout<<"String len: "<<strlen(line)<<endl;
    unsigned int stringLength;
    for(stringLength = 0; line[stringLength] != '\0'; stringLength++);
    cout<<"String Length1: "<<stringLength<<endl;
    const char *str = line;
    for(stringLength = 0; *str++ != '\0'; stringLength++);
    cout<<"String Length2: "<<stringLength<<endl;

    /*First initialize by 0*/
    unsigned int len = 0;
    while(*line++ != '\0'){
        len++;
    }
    cout<<"Len: "<<len<<endl;
    
    return 0;
}
