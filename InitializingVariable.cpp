/**
 * @file InitializingVariable.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief C++ is provided three types of variable Initialization
 * @version 0.1
 * @date 2022-11-26
 * @since SaturDay; 09:53 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    int age = 26; /*C-like initialization*/
    cout<<"The age: "<<age<<endl;
    float cgpa (3.35); /*Constructor Initialization*/
    cout<<"The CGPA: "<<cgpa<<endl;
    const char *name {"Yousuf"}; /*C++ 11 list initialization synatax*/
    cout<<"The name: "<<name<<endl;

    string address {"Kanast-6341"};
    cout<<"The addresss: "<<address<<endl;
    string state ("Bangladesh");
    cout<<"The state: "<<state<<endl;
    return 0;
}
