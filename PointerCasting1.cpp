/**
 * @file PointerCasting1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointer-data-type casting
 * @version 0.1
 * @date 2022-09-08
 * @since ThursDay; 10:32 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    float a = 10.375;
    char *ptr;
    cout<<"Type casting float to char:"<<endl;
    ptr = (char *)&a;
    cout<<"ptr\t*ptr"<<endl;
    cout<<"----\t----"<<endl;
    printf("%x\t%02x\n", ptr, *ptr);
    ++ptr;
    printf("%x\t%02x\n", ptr, *ptr);
    ++ptr;
    printf("%x\t%02x\n", ptr, *ptr);
    ++ptr;
    printf("%x\t%02x\n", ptr, *ptr);

    char ch[7] = "ACEGIK";
    int *intPtr;

    cout<<"\nType casting char to int:"<<endl;
    intPtr = (int*)&ch;
    cout<<"intPtr\t*intPtr"<<endl;
    cout<<"-------\t-------"<<endl;
    printf("%x\t%02x\n", intPtr, *intPtr);
    ++intPtr;
    printf("%x\t%02x\n", intPtr, *intPtr);
    ++intPtr;
    printf("%x\t%02x\n", intPtr, *intPtr);
    ++intPtr;

    
    return 0;
}
