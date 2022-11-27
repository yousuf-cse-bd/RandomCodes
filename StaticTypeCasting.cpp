/**
 * @file StaticTypeCasting.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Type casting in modern C++ using static_cast key-word
 * @version 0.1
 * @date 2022-11-27
 * @since SunDay; 10:57 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> elements(3);
    cout<<"Enter 3 integers seprated by spaces: ";
    cin>>elements.at(0)>>elements.at(1)>>elements.at(2);

    unsigned long long int sum {0};
    cout<<"The 3 numbers were: ";
    for(unsigned short int i = 0; i != elements.size(); i++){
        cout<<elements.at(i)<<" ";
        sum += elements.at(i);
    }
    cout<<"\nThe sum of the numbers: "<<sum<<endl;
    double average {0.0};
    average = static_cast <double> (sum) / elements.size(); /*Casting in modern C++*/
    // average = (double) sum / elements.size(); /*Old C-style*/
    cout<<"The average of the numbers: "<<average<<endl;
    return 0;
}

