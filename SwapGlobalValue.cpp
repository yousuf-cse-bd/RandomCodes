/**
 * @file SwapGlobalValue.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Interchange global variable
 * @version 0.1
 * @date 2022-06-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #include <iostream>
 using namespace std;
 
 int num1 = 10, num2 = 15;
 int main(int argc, char const *argv[])
 {
    /* code */
    cout<<"Before Swaping..."<<endl;
    cout<<"Num1 = "<<num1<<"\nNum2 = "<<num2<<endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    cout<<"After Swaping..."<<endl;
    cout<<"Num1 = "<<num1<<"\nNum2 = "<<num2<<endl;
    return 0;
 }
 