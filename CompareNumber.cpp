/**
 * @file CompareNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Comparing two integer numbers using if-else and conditional operator 
 * @version 0.1
 * @date 2022-11-30
 * @since WednesDay; 04:36 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int number1{}, number2{}; /*Initialized by zero*/
    cout<<"Enter number1 here: ";
    cin>>number1;
    cout<<"Enter number2 here: ";
    cin>>number2;

    if(number1 == number2){
        cout<<"\tThe both numbers are same."<<endl;
    }else{
        cout<<"\tThe small number: "<<((number1 < number2)?number1: number2)<<endl;
        cout<<"\tThe large number: "<<((number1 > number2)?number1: number2)<<endl;
    }

    return 0;
}
