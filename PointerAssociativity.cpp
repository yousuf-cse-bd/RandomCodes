/**
 * @file PointerAssociativity.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Chech Pointer Associativity
 * @version 0.1
 * @date 2022-09-07
 * @since WednesDay; 09:41 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int x, A[] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = A;
    cout<<*ptr<<endl;
    x = *ptr++; /*Increments pointer posfix*/
    cout<<x<<endl;
    x = *++ptr; /*Increments pointer prefix*/
    cout<<x<<endl;
    x = ++*ptr; /*Increments pointed value*/
    cout<<x<<endl;
    return 0;
}
