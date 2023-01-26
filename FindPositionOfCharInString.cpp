/**
 * @file FindPositionOfCharInString.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find position of a character from given string
 * @version 0.1
 * @date 2023-01-26
 * @since ThursDay; 08:59 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char *const name {"Yousuf"};
    cout<<"Given string: "<<name<<endl;
    char ch {'s'};
    const char *const firstMatchedChar {strchr(name,ch)}; /*First occured and sub-string*/

    if(firstMatchedChar != nullptr){
        cout<<"First occured substring: "<<firstMatchedChar<<endl;
        cout<<"Start index: "<<(firstMatchedChar - name)<<endl;
        cout<<"Start position: "<<(firstMatchedChar - name + 1)<<endl;
    }
    else{
        cout<<"'"<<ch<<"' is NOT matched...!"<<endl;
    }
    
    return 0;
}
