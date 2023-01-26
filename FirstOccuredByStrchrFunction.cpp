/**
 * @file FirstOccuredByStrchrFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find sub-string from string using strchr() function
 * @version 0.1
 * @date 2023-01-26
 * @since ThursDay; 10:05 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char *const line {"Try not, Do, or do not. There is no try."};
    char target {'T'};
    const char *resultSubString {line};
    size_t counter {0};
    while((resultSubString = strchr(resultSubString, target)) != nullptr){
        cout<<"Found: '"<<target<<"' starting at: '"<<resultSubString<<"'"<<endl;
        /*Increment result-sub-string, otherwise we'll find target at the same location*/
        ++resultSubString;
        counter++;
    }
    cout<<"Counter: "<<counter<<endl;

    return 0;
}
