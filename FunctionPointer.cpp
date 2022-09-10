/**
 * @file FunctionPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function pointer
 * @version 0.1
 * @date 2022-09-10
 * @since SaturDay; 05:52 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*No return data and no parameters*/
void function1(void){
    cout<<"This is function1()"<<endl;
}
/*Return 20 data and no parameters*/
int function2(void){
    cout<<"This is function2()"<<endl;
    return 20;
}
/*Return int data and take two int args*/
int function3(int x, int y){
    cout<<"This is function3()"<<endl;
    return (x+y);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    void (*pointerFunction1)(void);
    int (*pointerFunction2)(void);
    int (*pointerFunction3)(int, int);

    int x;
    /*pointerFunction1 is pointing functin1()*/
    pointerFunction1 = function1;
    /*pointerFunction2 is pointing functin2()*/
    pointerFunction2 = function2;
    /*pointerFunction3 is pointing functin3()*/
    pointerFunction3 = function3;

    /*Calling function1()*/
    (*pointerFunction1)();
    /*Calling function2()*/
    (*pointerFunction2)();
    /*Calling function3()*/
    x = (*pointerFunction3)(10, 20);
    cout<<"X = "<<x<<endl;
    return 0;
}
