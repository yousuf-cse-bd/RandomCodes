/**
 * @file VoidPtrIncDec.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Void pointer does not support increment or decrerement but not type-casting
 * @version 0.1
 * @date 2022-09-08
 * @since ThursDay; 08:24 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    void *voidPtr;
    int variable = 10;

    voidPtr = &variable;
    cout<<"Dereference void pointer: "<<*(int*)voidPtr<<endl;

    char name[] = "Yousuf";
    voidPtr = name;
    // ++voidPtr;
    // ++voidPtr;
    cout<<"Dereference void pointer casting char type: "<<*(char*)voidPtr<<endl;
    cout<<"Here increment after casting: "<<++(*(char*)voidPtr)<<endl;
    cout<<"Here decrement after casting: "<<--(*(char*)voidPtr)<<endl;
    return 0;
}
