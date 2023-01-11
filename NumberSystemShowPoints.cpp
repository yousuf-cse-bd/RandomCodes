/**
 * @file NumberSystemShowPoints.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Show points digits using showpoint by iomanip header file
 * @version 0.1
 * @date 2023-01-11
 * @since WednesDay; 10:48 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    double d {34.1}, e {101.99}, f {12.0};
    int g {45};
    cout<<"no-show-point (default)"<<endl;
    cout<<"d: "<<d<<endl;
    cout<<"e: "<<e<<endl;
    cout<<"f: "<<f<<endl;
    cout<<"g: "<<g<<endl;

    cout<<"show-point"<<endl;
    cout<<showpoint;
    cout<<"d: "<<d<<endl;
    cout<<"e: "<<e<<endl;
    cout<<"f: "<<f<<endl;
    cout<<"g: "<<g<<endl;
    return 0;
}
