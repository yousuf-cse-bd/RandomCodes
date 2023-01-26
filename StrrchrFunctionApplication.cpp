/**
 * @file StrrchrFunctionApplication.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find the last position by strrchr(), and first strchr()
 * @version 0.1
 * @date 2023-01-26
 * @since ThursDay; 09:24 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char name1[] {"Muhammad Ali Yousuf Ali"};
    cout<<"Given name1: "<<name1<<endl;
    char *position {strrchr(name1, 'A')}; /*For last position*/
    if(position != nullptr){
        *position = '\0';
        cout<<"After replaced: "<<name1<<endl;
    }
    else{
        cout<<"Not matched..!"<<endl;
    }
    cout<<"----------------------------"<<endl;
    char name2 [] {"Muhammad Ali Yousuf Ali"}; /*For first position*/
    cout<<"Given name1: "<<name2<<endl;
    position = strchr(name2, 'A');
    if(position != nullptr){
        *position = '\0';
        cout<<"After replaced: "<<name2<<endl;
    }
    else{
        cout<<"Not matched..!"<<endl;
    }
    
    

    return 0;
}
