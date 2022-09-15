/**
 * @file PointedMemberIncDec.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointed member variable (value) increment and decrement
 * @version 0.1
 * @date 2022-09-15
 * @since ThursDay; 07:17 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

struct PointedMemberIncDec{
    /* data */
    int incVariable, decVariable;
};

void increment1(PointedMemberIncDec *inc){
    cout<<"Increased, Here Pointer: "<<inc->incVariable<<endl;
}
void increment2(PointedMemberIncDec &inc){
    cout<<"Increased, Here Reference: "<<inc.incVariable<<endl;
}


void decrement1(PointedMemberIncDec *dec){
    cout<<"Decreased, Here Pointer: "<<dec->decVariable<<endl;
}
void decrement2(PointedMemberIncDec &dec){
    cout<<"Decreased, Here Reference: "<<dec.decVariable<<endl;
}
/*Increment and decrement just one times but display two times with two types*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    PointedMemberIncDec instance, *pointer;
    instance.decVariable = 10;
    instance.incVariable = 10;
    pointer = &instance;
    ++pointer->incVariable;
    /*Call by pointer refernce*/
    increment1(pointer);
    /*Now call by only reference*/
    increment2(instance);
    --pointer->decVariable;
    /*Call by pointer refernce*/
    decrement1(pointer);
    /*Now call by only reference good job*/
    decrement2(instance);
    
    return 0;
}
