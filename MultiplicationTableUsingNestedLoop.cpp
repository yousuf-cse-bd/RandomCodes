/**
 * @file MultiplicationTableUsingNestedLoop.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple multiplication table
 * @version 0.1
 * @date 2022-12-01
 * @since ThursDay; 10:55 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    for(unsigned int number1 {1}; number1 <= 20; number1++){
        for(unsigned int number2 {1}; number2 <= 10; number2++){
            cout<<"\t"<<number1<<" x "<<number2<<" = "<<(number1 * number2)<<endl;
        }
        cout<<"--------------------------------------"<<endl;
    }
    return 0;
}
