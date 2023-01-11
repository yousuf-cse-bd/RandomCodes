/**
 * @file NumberSystemSetprecision.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The number pf the digits printed out for a double vulue
 * @version 0.1
 * @date 2023-01-11
 * @since WednesDay; 04:35 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    long double pi {3.1415926535897932384626433832795};
    cout<<"Pi: "<<pi<<" defualt precision(6)"<<endl;
    cout<<"Pi: "<<setprecision(6)<<pi<<" setPrecision(6)"<<endl;
    cout<<"Pi: "<<setprecision(10)<<pi<<" setPrecision(10)"<<endl;
    cout<<"Pi: "<<setprecision(20)<<pi<<" setPrecision(20)"<<endl;
    cout<<"Pi: "<<setprecision(50)<<pi<<" setPrecision(50)"<<endl;
    return 0;
}
