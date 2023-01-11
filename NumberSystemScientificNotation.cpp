/**
 * @file NumberSystemScientificNotation.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Displaying double values with scientific notation
 * @version 0.1
 * @date 2023-01-11
 * @since WednesDay; 04:18 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    double pi{3.1415926535897932384626433832795};
    double b{2006.0};
    double c{1.34e-10};
    
    cout<<"Double valued defualt print"<<endl;
    cout<<"Pi: "<<pi<<endl;
    cout<<"B: "<<b<<endl;
    cout<<"C: "<<c<<endl;

    cout<<"Double values scientific notation"<<endl;
    cout<<scientific;
    cout<<"Pi: "<<pi<<endl;
    cout<<"B: "<<b<<endl;
    cout<<"C: "<<c<<endl;

    cout<<"\nDouble values fixed"<<endl;
    cout<<fixed;
    // cout<<setprecision(3);
    cout<<"Pi: "<<pi<<endl;
    cout<<"B: "<<b<<endl;
    cout<<"C: "<<c<<endl;


    return 0;
}
