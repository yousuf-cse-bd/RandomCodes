/**
 * @file TernaryOperator1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Check adulty using conditional (Ternary) operator
 * @version 0.1
 * @date 2023-04-08
 * @since SaturDay; 10:13 PM
 * @copyright Copyright (c) 2023
 * @institute Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, const char *const argv[]){
    system("cls");
    int age{26};
    cout<<"Enter your age here: ";
    cin>>age;

    cout<<"You are "<<((age >= 18)?(age<=40)?"an adult":"an old":"an young")<<"."<<endl;
    system("pause>0");
    return 0;
}