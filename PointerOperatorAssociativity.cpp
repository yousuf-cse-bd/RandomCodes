/**
 * @file PointerOperatorAssociativity.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Verifying pointer operator associativity
 * @version 0.1
 * @date 2022-12-18
 * @since SunDay; 04:49 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int arrayList [] {10, 20, 30, 40, 50};
    int x{}, *ptr{nullptr};
    ptr = arrayList;
    x = *ptr++; /*Increment pointer*/
    printf("ptr: %x\tx = %d\n", ptr, x);
    x = *++ptr; /*Increment pointer*/
    printf("ptr: %x\tx = %d\n", ptr, x);
    x = ++*ptr; /*Increment pointed variable*/
    printf("ptr: %x\tx = %d\n", ptr, x);
    printf("Address[2]: %x\tValue = %d\n", (arrayList + 2), *(arrayList + 2));
    return 0;
}
