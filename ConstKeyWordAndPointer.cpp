/**
 * @file ConstKeyWordAndPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Always constant pointer variable
 * @version 0.1
 * @date 2022-12-16
 * @since FriDay; 04:33 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const int id {171311101};
    // id = 171311098; /*We can not re-assigned any value*/

    int value1 {101}, value2 {98};
    const int *ptr1 {&value1}; /*This pointer variable can be point to another address*/
    cout<<"Value1 or *ptr1: "<<*ptr1<<endl;
    ptr1 = &value2; /*This pointer variable can be point to another address*/
    cout<<"Value2 or *ptr1: "<<*ptr1<<endl;
    // *ptr1 = 1000; /*We can not re-assigned any value*/

    int num1 {10}, numb2 {20};
    int *const pointer1 {&num1};
    cout<<"Num1 or pointer1: "<<num1<<endl;
    *pointer1 = 11;
    cout<<"Num1 or pointer1: "<<num1<<endl;

    // pointer1 = &numb2;/*We can not re-assigned any value*/

    /*Full constant pointer variable*/
    double pi {acos(-1)};
    const double *const piPointer {&pi};
    cout<<"\nThe pi value: "<<pi<<endl;
    cout<<"The pi-Pointer value: "<<*piPointer<<endl;

    // *piPointer = 3.1416; /*We can not re-assigned any value*/
    // piPointer = nullptr; /*We can not re-assigned any value*/
    return 0;
}
