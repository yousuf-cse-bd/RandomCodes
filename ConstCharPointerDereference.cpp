/**
 * @file ConstCharPointerDereference.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief const char typed pointer and its dereference action as char array
 * @version 0.1
 * @date 2023-01-16
 * @since MonDay; 12:36 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char *const fullName {"Muhammad Yousuf Ali"};
    cout<<"The name: "<<fullName<<endl; /*Not dereference*/
    cout<<"First char: "<<*fullName<<endl; /*To converting as array*/
    cout<<"Second char: "<<*(fullName + 1)<<endl;
    cout<<"Pointer variable "<<sizeof(fullName)<<" is bytes."<<endl;
    for(unsigned short int i {0}; *(fullName + i) != '\0'; i++){
        if(*(fullName + i) == ' '){
            cout<<"FullName["<<i<<"] = "<<"Space"<<endl;
        }else{
            cout<<"FullName["<<i<<"] = "<<*(fullName + i)<<endl;
        }
    }

    return 0;
}
