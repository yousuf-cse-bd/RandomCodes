/**
 * @file FormationTable1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Output ostream formation by iomanip header-file and its built-in functions
 * @version 0.1
 * @date 2023-01-06
 * @since FriDay; 05:05 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"********************Unformatted Table********************"<<endl;
    vector <vector<string>> table1{{"Daniel","Gray", "25"},
                        {"Stanly", "Woods", "33"},
                        {"Jordar", "Parker", "45"},
                        {"Joe", "Ball", "21"},
                        {"Josh", "Carr", "27"},
                        {"Izaiah", "Robinson", "29"}};
                        cout<<"FirstName\t"<<"LastName\t"<<"Age"<<endl;
    for(const auto &x: table1){
        // for(size_t i{0}; i<x.size(); i++){
        //     cout<<x.at(i)<<"\t";
        // }
        for(const auto &y: x){
            cout<<y<<"\t";
        }
        cout<<endl;
    }
    cout<<"********************Formatted Table********************"<<endl;
    cout<<setw(10)<<"FirstName"<<setw(10)<<"LastName"<<setw(10)<<"Age"<<endl;
    for(const auto &x: table1){
        for(const auto &y: x){
            cout<<setw(10)<<y<<setw(10);
        }
        cout<<endl;
    }
    cout<<"********************Formatted Table with Fill********************"<<endl;
    const size_t columnWidth {20};
    cout<<setfill('-'); /*The fill character*/
    cout<<setw(columnWidth)<<"FirstName"<<setw(columnWidth)<<"LastName"<<setw(columnWidth)<<"Age"<<endl;
    for(const auto &x: table1){
        for(const auto &y: x){
            cout<<setw(columnWidth)<<y<<setw(columnWidth);
        }
        cout<<endl;
    }
    return 0;
}
