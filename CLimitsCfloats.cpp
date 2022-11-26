/**
 * @file CLimitsCfloats.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Min and Max limits in integers and floating-points (real-number)
 * @version 0.1
 * @date 2022-11-26
 * @since SaturDay; 12:04 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Short Int Min: "<<INT16_MIN<<endl;
    cout<<"Short Int MAX: "<<INT16_MAX<<endl;
    cout<<"Int MAX: "<<INT_MAX<<endl;
    cout<<"Int MIN: "<<INT_MIN<<endl;
    cout<<"Long MAX: "<<LONG_MAX<<endl;
    cout<<"Long MIN: "<<LONG_MIN<<endl;
    cout<<"Long Long MAX: "<<LONG_LONG_MAX<<endl;
    cout<<"Long Long MIN: "<<LONG_LONG_MIN<<endl;

    cout<<"FLOAT MAX: "<<FLT_MAX<<endl;
    cout<<"FLOAT MIN: "<<FLT_MIN<<endl;
    return 0;
}
