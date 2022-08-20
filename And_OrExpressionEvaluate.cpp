/**
 * @file And_OrExpressionEvaluate.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Logical AND & OR expression with operands evaluate
 * @version 0.1
 * @date 2022-08-20
 * @since SaturDay; 05:52 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    int x = 0, y = 0, z = 0;
    int a = 0, b = 0, c = 0;

    /*AND operation evaluated*/
    cout<<"Logical AND operation evaluation."<<endl;
    printf("(x = 1) && (y = 2) && (z = 3) = %d\n",(x = 1) && (y = 2) && (z = 3));
    cout<<"x = "<<x<<", y = "<<y<<", z = "<<z<<endl;
    printf("(a = 1) && (b = 2) && (b = 3) = %d\n",(a = 1) && (b) && (c = 3));
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;

    x = 0, y = 0, z = 0;
    a = 0, b = 0, c = 0;
    cout<<"\n\nLogical OR operation evaluation."<<endl;
    /*OR operation evaluated*/
    printf("(x = 1) || (y = 2) || (z = 3) = %d\n",(x = 1) || (y = 2) || (z = 3));
    cout<<"x = "<<x<<", y = "<<y<<", z = "<<z<<endl;
    printf("(a = 1) || (b = 2) || (b = 3) = %d\n",(a) || (b = 1) || (c = 3));
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    return 0;
}
