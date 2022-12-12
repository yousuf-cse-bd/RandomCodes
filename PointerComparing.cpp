/**
 * @file PointerComparing.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief char pointer, string pointer, null-pointer
 * @version 0.1
 * @date 2022-12-13
 * @since MonDay; 01:06 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string s1 {"Yousuf"}, s2 {"Yousuf"};
    string *p1 {&s1}, *p2 {&s2}, *p3 {&s1};
    /*Just address comparing*/
    cout<<p1<<" == "<<p2<<"->"<<(p1 == p2)<<endl; /*False*/
    cout<<p1<<" == "<<p2<<"->"<<(p1 == p3)<<endl; /*True*/

    /*Now, value comparing*/
    cout<<*p1<<" == "<<*p2<<"->"<<(*p1 == *p2)<<endl; /*True*/
    cout<<*p1<<" == "<<*p2<<"->"<<(*p1 == *p3)<<endl; /*True*/

    char name[] {"Frank"};
    char *namePointer1 {nullptr}, *namePointer2 {nullptr};

    namePointer1 = &name[0]; //F
    namePointer2 = &name[3]; //n
    // cout<<"1: "<<namePointer1<<endl; /*Index 0 to last*/
    // cout<<"2: "<<namePointer2<<endl; /*Index 3 to last*/
    cout<<"In the string "<<name<<", "<<*namePointer2<<" is "<<(namePointer2 - namePointer1)<<" character away from "<<*namePointer1<<endl;
    
    return 0;
}
