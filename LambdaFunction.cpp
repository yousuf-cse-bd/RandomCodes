/**
 * @file LambdaFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The lambda functions
 * @version 0.1
 * @date 2023-02-01
 * @since WednesDay; 06:41 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

/*
    Lambda function signeture
    [capture lits](parametrs)->return type{
        //Function body
    }
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*No paramter and no return value*/
    auto lambdaFunction1 = [](){ /*Return typed must be auto*/
        cout<<"This is a lambda function1"<<endl;
    };

    lambdaFunction1();

    cout<<"-----------------------------------------------"<<endl;

    auto lambdaFunction2 = [](int number1, int number2){
        cout<<"Two paramiters and no return value"<<endl;
        cout<<number1<<" + "<<number2<<" = "<<(number1 + number2)<<endl;
    };
    lambdaFunction2(10,15);

    cout<<"-----------------------------------------------"<<endl;

    auto lambdaFunction3 = [](const int &number1, const int number2){
        // cout<<"Two paramiters and return value"<<endl;
        return (number1 + number2);
    };
    cout<<"From function: "<<lambdaFunction3(15, 10)<<endl;
    
    cout<<"-----------------------------------------------"<<endl;
    auto lambdaFunction4 = [](){
        constexpr int id {171311101};
        return id;
    };
    cout<<"The my id: "<<lambdaFunction4()<<endl;

    cout<<"-----------------------------------------------"<<endl;
    
    auto lambdaFunctin5 = [](const string &name = "Yousuf Ali"){
        // cout<<"Defualt paramter but return value."<<endl;
        return name;
    };
    cout<<"From function: "<<lambdaFunctin5()<<endl;

    cout<<"======================================================="<<endl;
    /*Declare a lambda function and call it directly*/
    [](){
        cout<<"This function calls it directly."<<endl;
    }();

    cout<<"-----------------------------------------------"<<endl;

    const int number1 {10}, number2{30};
    [](const int &number1, const int &number2){
        cout<<number1<<" + "<<number2<<" = "<<(number1 + number2)<<endl;
    }(number1,number2);

    cout<<"-----------------------------------------------"<<endl;
    /*Lambda function that return something*/
    const auto result = [](const double &number1, const double &number2){
        return (number1 + number2);
    }(5,9);
    cout<<"Result: "<<result<<endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"Result: "<<[](const double &number1, const double &number2){ 
        return (number1 + number2);
    }(60,10);

    cout<<"======================================================="<<endl;

    /*Explicitly specify the return type*/
    const double a{6.9};
    const double b{3.5};
    auto add1 = [](const double &a, const double &b)->int{ /*Explicitly specified*/
        return (a + b);
    }(a, b);

    auto add2 = [](const double &a, const double &b){
        return (a + b);
    }(a, b);
    
    cout<<"Result Add1: "<<add1<<endl;
    cout<<"Result Add2 "<<add2<<endl;
    cout<<"Sizeof add1: "<<sizeof(add1)<<" Bytes"<<endl; /*4Bytes*/
    cout<<"Sizeof add2: "<<sizeof(add2)<<" Bytes"<<endl; /*8Bytes*/


    return 0;
}
