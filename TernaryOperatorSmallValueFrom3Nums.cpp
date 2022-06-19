/**
 * @file TernaryOperatorSmallValueFrom3Nums.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int num1, num2, num3;
    num1 = 55, num2 = -10, num3 = -115;

    // int smallNumber = (num1 < num2) ? num1 : (num2 < num3) ? num2 : num3;
    // cout<<"Small value from the upon three number: "<<smallNumber<<endl;
    /*This method just simplify*/
    (num1 < num2) ? cout<<"Small Number1: "<<num1<<endl: (num2 < num3) ? cout<<"Small Number2: "<<num2<<endl:
    cout<<"Small Number3: "<<num3<<endl;

    /*Ternary Operation with logical operator*/
    (num1 < num2 && num1 < num3)? cout<<"Small Number1: "<<num1<<endl:
    (num2 < num3 && num2 < num3)?cout<<"Small Number2: "<<num2<<endl:
    cout<<"Small Number3: "<<num3<<endl;
    /*This method just simplify*/
    if(num1 < num2){
        cout<<"Small Number1: "<<num1<<endl;
    }
    else if(num2 < num3){
        cout<<"Smalll Number2: "<<num2<<endl;
    }
    else{
        cout<<"Small Number3: "<<num3<<endl;
    }
    /*If,else-if, else with logical operator, more specific*/
    if(num1 < num2 && num1 < num3){
        cout<<"Small Number1: "<<num1<<endl;
    }
    else if(num2 < num1 && num2 < num3){
        cout<<"Smalll Number2: "<<num2<<endl;
    }
    else{
        cout<<"Small Number3: "<<num3<<endl;
    }
    return 0;
}
