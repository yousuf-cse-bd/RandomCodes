/**
 * @file VoidPointerNiton.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Void pointer is generic type of pointer
 * @version 0.1
 * @date 2022-09-08
 * @since ThursDay; 03:34 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char ch = 'A';
    int i, x = 101;
    float y = 10.375;
    double z = 99.99;

    char *charPtr;
    void *voidPtr;
    charPtr = (char *)&voidPtr;
    for(i = 0; i < 18; i++){
        printf("Address = %X\tData = %02X\n", charPtr++, (unsigned char)*charPtr);
    }
    printf("\nAt the begining: voidPtr = %02x\n", &voidPtr, voidPtr);//right voidPtr optional here
    voidPtr = &ch;
    printf("After voidPtr = &ch:\n");
    printf("\tvoidPtr = %X\t*voidPtr = %02X\n",voidPtr, *(char*)voidPtr);
    voidPtr = &x;
    printf("After voidPtr = &x:\n");
    printf("\tvoidPtr = %X\t*voidPtr = %02X\n",voidPtr, *(int*)voidPtr);
    voidPtr = &y;
    printf("After voidPtr = &y:\n");
    printf("\tvoidPtr = %X\t*voidPtr = %f\n",voidPtr, *(float*)voidPtr);
    voidPtr = &z;
    printf("After voidPtr = &z:\n");
    printf("\tvoidPtr = %X\t*voidPtr = %lf\n",voidPtr, *(double*)voidPtr);

    return 0;
}
