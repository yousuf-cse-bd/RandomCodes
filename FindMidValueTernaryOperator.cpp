/**
 * @file FindMidValueTernaryOperator.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find mid number using ternary and logical operator
 * @version 0.1
 * @date 2022-10-16
 * @since SunDay; 11:07 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    ((a <= b && b <= c) || (c <= b && b <= a))?cout<<"\tMidB: "<<b<<endl:
    ((b <= c && c <= a) || (a <= c && c <= b))?cout<<"\tMidC: "<<c<<endl:
    cout<<"\tMidA: "<<a<<endl;
    return 0;
}
