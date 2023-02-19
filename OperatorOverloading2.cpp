/**
 * @file OperatorOverloading2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloading and function overloading example
 * @version 0.1
 * @date 2023-02-19
 * @since SunDay; 09:22 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

class OperatorOverloading{
    friend ostream &operator<< (ostream &output, const OperatorOverloading &operatorOverloading){
        output <<"operatorOverloading: ["<<operatorOverloading.height<<", "<<operatorOverloading.width<<"]";
        return output;
    }
private:
    double height{};
    double width{};

public: 
    OperatorOverloading(){
        height = 0, width = 0;
        cout<<"Default constructor for OperatorOverloading class."<<endl;
    }

    OperatorOverloading(const double &height, const double &width):height{height}, width{width}{
        cout<<"Custom constrcutor for OperatorOverloading class."<<endl;
    }

    OperatorOverloading(const OperatorOverloading &source):height{source.height}, width{source.width}{
        cout<<"Copy constructor for OperatorOverloading class."<<endl;
    }
    /*This is an operator-overloafding member function and parameter argument double typed*/
    OperatorOverloading operator+ (const double &x){ /*Binay operator*/
        cout<<"\t\tOperator overloading called1"<<endl;
        OperatorOverloading operatorOverloading;
        operatorOverloading.height = height + x;
        operatorOverloading.width = width + x;
        return operatorOverloading;
    }
    /*Operator overloading and function overloadoing at a time*/
    OperatorOverloading operator+ (OperatorOverloading &operatorOverloading){
        cout<<"\t\tOperator overloading called2"<<endl;
        operatorOverloading.height = height;
        operatorOverloading.width = width;
        return operatorOverloading;
    }
    ~OperatorOverloading() = default;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<fixed<<setprecision(2);
    
    OperatorOverloading operatorOverloading1{10, 20};
    cout<<"operatorOverloading1 = "<<operatorOverloading1<<endl;
    
    OperatorOverloading operatorOverloading2 = operatorOverloading1 + 50; /*10 + 50 = 60, 20 + 50 = 70*/
    cout<<"operatorOverloading2 = "<<operatorOverloading2<<endl;

    cout<<"================================================================"<<endl;
    OperatorOverloading operatorOverloading3{};
    operatorOverloading3 = operatorOverloading2 + operatorOverloading1;
    cout<<"operatorOverloading3 = "<<operatorOverloading3<<endl;

    printf("Happy Ending...!%c %c %c\n", 2, 2, 2);
    return 0;
}
