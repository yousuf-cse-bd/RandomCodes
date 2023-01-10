/**
 * @file NumberSystemThreeBased.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Converted a number in three differnt based system
 * @version 0.1
 * @date 2023-01-10
 * @since TuesDay; 12:16 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int number1 {0b00001111}; /*Binary number*/
    int number2 {15}; /*Decimal number*/
    int number3 {017}; /*Octal number*/
    int number4 {0x0F}; /*Hexadecimal number*/

    cout<<"Number1: "<<number1<<endl;
    cout<<"Number2: "<<number2<<endl;
    cout<<"Number3: "<<number3<<endl;
    cout<<"Number4: "<<number4<<endl;

    unsigned int positiveInt {717171};
    int negativeInt {-47347};
    double doubleVar {498.32};

    cout<<"\nPositive-int in different bases"<<endl;
    cout<<"Positive-int: "<<dec<<positiveInt<<" in decimal."<<endl;
    cout<<"Positive-int: "<<oct<<positiveInt<<" in octal."<<endl;
    cout<<"Positive-int: "<<hex<<positiveInt<<" in hexadecimal."<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"Negative-int in different bases"<<endl;
    cout<<"Negative-int: "<<dec<<negativeInt<<" in decimal."<<endl;
    cout<<"Negative-int: "<<oct<<negativeInt<<" in octal."<<endl;
    cout<<"Negative-int: "<<hex<<negativeInt<<" in hexadecimal."<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"Double-var in different bases"<<endl;
    cout<<"Double-var "<<dec<<doubleVar<<" in decimal."<<endl;
    cout<<"Double-var: "<<oct<<doubleVar<<" in octal."<<endl;
    cout<<"Double-var: "<<hex<<doubleVar<<" in hexadecimal."<<endl;
    return 0;
}
