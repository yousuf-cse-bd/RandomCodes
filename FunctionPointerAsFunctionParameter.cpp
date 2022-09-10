/**
 * @file FunctionPointerAsFunctionParameter.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of function-pointer (in details Niton's Book)
 * @version 0.1
 * @date 2022-09-10
 * @since SaturDay; 06:15 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*Return int data and take tow int type argument*/
int maxValue(int x, int y){
    return ((x > y)? x: y);
}
/*Return int data and take tow int type argument*/
int minValue(int x, int y){
    return ((x < y)? x: y);
}
/*pointerFunction point to poniting to any above type function*/
int getReuslt(int x, int y, int(*pointerFunction)(int, int)){
    /*calling the normal function with return value*/
    return (*pointerFunction)(x,y);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Here calls getResult() function*/
    cout<<"Max Value: "<<getReuslt(12, 25, maxValue)<<endl;
    cout<<"Min Value: "<<getReuslt(28, 10, minValue)<<endl;
    return 0;
}
