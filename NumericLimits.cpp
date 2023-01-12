/**
 * @file NumericLimits.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Data-types limit and its memory size in C++
 * @version 0.1
 * @date 2023-01-12
 * @since ThursDay; 05:32 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <limits> //C++
// #include <climits> //C
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"\tData-types limit and its memory size in C++\n"<<endl;
    cout<<showpos;
    constexpr ssize_t charLowerLimit {numeric_limits<char>::min()},
        charUpperLimit {numeric_limits<char>::max()};
    cout<<"The range for <char> in from: "<<charLowerLimit<<" to "<<charUpperLimit;
        cout<<" and size: "<<sizeof(char)<<" Byte"<<endl;

    constexpr size_t unsignedCharLowerLimit {numeric_limits<unsigned char>::min()},
         unsignedCharUpperLimit {numeric_limits<unsigned char>::max()};
    cout<<"\nThe range for <unsigned char> in from: "<<unsignedCharLowerLimit<<" to "<<unsignedCharUpperLimit;
        cout<<" and size: "<<sizeof(char)<<" Byte"<<endl;

    cout<<"\nThe range for <short> in from: "<<numeric_limits<short>::min()<<" to "<<numeric_limits<short>::max()
        <<" and size: "<<sizeof(short)<<" Bytes."<<endl;

    cout<<"\nThe range for <unsigned short int> in from: "<<numeric_limits<unsigned short int>::min();
        cout<<" to "<<numeric_limits<unsigned short int>::max()<<" and size: "<<sizeof(unsigned short int)<<" Bytes."<<endl;
        
    cout<<"\nThe range for <int> in from: "<<numeric_limits<int>::min()<<" to "<<numeric_limits<int>::max();
        cout<<" and size: "<<sizeof(int)<<" Bytes."<<endl;
    // cout<<"Int-Min: "<<INT_MIN<<"\tInt-Max: "<<INT_MAX<<endl;
    cout<<"\nThe range for <unsigned int> in from: "<<numeric_limits<unsigned int>::min()<<" to "<<numeric_limits<unsigned int>::max();
        cout<<" and size: "<<sizeof(unsigned int)<<" Bytes."<<endl;

    cout<<"\nThe range for <long long> from: "<<numeric_limits<long long>::min()<<" to "<<numeric_limits<long long>::max();
        cout<<" and size: "<<sizeof(long long)<<" Bytes."<<endl;

    cout<<"\nThe range for <ssize_t> from: "<<numeric_limits<ssize_t>::min()<<" to "<<numeric_limits<ssize_t>::max();
        cout<<" and size: "<<sizeof(ssize_t)<<" Bytes."<<endl;

    cout<<"\nThe range for <size_t> from: "<<numeric_limits<size_t>::min()<<" to "<<numeric_limits<size_t>::max();
        cout<<" and size: "<<sizeof(size_t)<<" Bytes."<<endl;

    cout<<"\nThe range for <float> from: "<<numeric_limits<float>::lowest()<<" to "<<numeric_limits<float>::max();
        cout<<" and size: "<<sizeof(float)<<" Bytes."<<endl;

    cout<<"\nThe range for <double> from: "<<numeric_limits<double>::lowest()<<" to "<<numeric_limits<double>::max();
        cout<<" and size: "<<sizeof(double)<<" Bytes."<<endl;

    cout<<"\nThe range for <long double> from: "<<numeric_limits<long double>::lowest()<<" to "<<numeric_limits<long double>::max();
        cout<<" and size: "<<sizeof(long double)<<" Bytes."<<endl;
    system("pause>0");
    return 0;
}
