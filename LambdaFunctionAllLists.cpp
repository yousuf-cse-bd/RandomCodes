/**
 * @file LambdaFunctionAllLists.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief In lambda function captured all list by '=' and '&' signs
 * @version 0.1
 * @date 2023-02-01
 * @since WednesDay; 11:02 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Captuterd all values pass by copy mechanism*/
    const int number1 {10}, number2 {15};
    const auto function1 = [=](){
        cout<<number1<<" + "<<number2<<" = "<<(number1 + number2)<<endl;
    };
    function1();
    /*Captured all values pass by reference mechanism*/
    const auto function2 = [&](){
        cout<<number1<<" + "<<number2<<" = "<<(number1 + number2)<<endl;
    };
    function2();

    /*Swaping by lambda function*/
    string firstName {"Muhammad"}, lastName {"Yousuf"};
    cout<<"\t\tBefore Swap"<<endl;
    cout<<"First-Name: "<<firstName<<"\tLastName: "<<lastName<<endl;
    auto swapFunction = [&](){
        string tempName {firstName};
        firstName = lastName;
        lastName = tempName;
        // cout<<number1<<" + "<<number2<<" = "<<(number1 + number2)<<endl;
        /*All variables accessed here*/
    };
    swapFunction();
    cout<<"\t\tAfter Swap"<<endl;
    cout<<"First-Name: "<<firstName<<"\tLastName: "<<lastName<<endl;
    
    return 0;
}
