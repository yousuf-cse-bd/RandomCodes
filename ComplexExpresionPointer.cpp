/**
 * @file ComplexExpresionPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Some complex expresion of pointer
 * @version 0.1
 * @date 2022-08-31
 * @since WednesDay; 05:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int i = 3, j = 5, *intPointerP = &i, *intPointerQ = &j, *intPointerR;
    double x;
    if(intPointerP == &i){
        cout<<"True"<<endl;
    }  

    // 7*(*intPointerP)/(*intPointerQ)+7
    float value = 7*(*intPointerP)/(*intPointerQ)+7;
    cout<<value<<endl;
    // *(intPointerR = &j)*= *intPointerP;
    intPointerR = &j;
    value = (*intPointerR)*(*intPointerP);
    cout<<value<<endl;
    return 0;
}
