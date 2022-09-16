/**
 * @file FunctoionArgumentAsPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Functoion Argument as Pointer and Also Variable Type Pointer
 * @version 0.1
 * @date 2022-09-16
 * @since FirDay; 11:19 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

void pointer(int *ptr){
    cout<<"Call by Pointer: "<<*ptr<<endl;
    // *ptr = 100; // Value can be updated for all place.
}
void reference(int &ref){
    cout<<"Call by Reference: "<<ref<<endl;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int var, *ptr;
    ptr = &var;
    var = 101;
    /*Call by pointer*/
    pointer(ptr);
    pointer(&var);
    /*Call by reference*/
    reference(var);
    reference(*ptr);
    return 0;
}
