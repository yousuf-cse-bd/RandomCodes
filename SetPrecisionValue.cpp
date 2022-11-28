/**
 * @file SetPrecisionValue.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief It is just set precision value
 * @version 0.1
 * @date 2022-11-28
 * @since MonDay; 10:42 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    float number {0.0f};
    cout<<"Enter a floating-point number here: ";
    cin>>number;
    cout<<fixed<<setprecision(2); /*Defined 2 digits after point*/
    cout<<"The entered number is: "<<number<<endl;
    return 0;
}
