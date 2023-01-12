/**
 * @file TextAlignments.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Text alignment for console output
 * @version 0.1
 * @date 2023-01-12
 * @since ThursDay; 12:14 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <vector>
// #include <locale>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <vector <string>> table { 
                                    {"Muhammad", "Yousuf", "26"},
                                    {"Tofayel", "Tamim", "20"},
                                    {"Maruf", "Hasan", "23"},
                                    {"Istiak", "Ahmad", "13"}};
    cout<<"***Regular display***"<<endl;
    for(const auto &x1: table){
        for(const auto &x2: x1){
            cout<<x2<<"\t";
        }
        cout<<endl;
    }
    // cout<<"Display with left alignment"<<endl;
    constexpr unsigned int columtWidth {20};
    cout<<left<<setfill('-');
    cout<<setw(columtWidth)<<"FirstName"<<setw(columtWidth)<<"LastName"<<setw(columtWidth)<<"Age"<<endl;
    for(const auto &x1: table){
        for(const auto &x2: x1){
            cout<<setw(columtWidth)<<x2;
        }
        cout<<endl;
    }
    cout<<"Display with right alignment"<<endl;
    cout<<right<<setfill('-');
    cout<<setw(columtWidth)<<"FirstName"<<setw(columtWidth)<<"LastName"<<setw(columtWidth)<<"Age"<<endl;
    for(const auto &x1: table){
        for(const auto &x2: x1){
            cout<<setw(columtWidth)<<x2;
        }
        cout<<endl;
    }
    cout<<"Display with internal alignment"<<endl;
    cout<<internal<<setfill('*');
    cout<<setw(columtWidth)<<-1.23<<endl;
    // cout<<setw(columtWidth)<<put_money(123, true)<<endl;

    return 0;
}
