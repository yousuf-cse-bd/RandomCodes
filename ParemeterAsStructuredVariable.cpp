/**
 * @file ParemeterAsStructuredVariable.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Parameterized structured variable (call by all types with single instance)
 * @version 0.1
 * @date 2022-09-15
 * @since ThursDay; 03:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)
/*Declared Structure*/
struct Person{
    string name;
    int age;
};
/*Declared user defined function*/
void showInfo(Person p1){
    cout<<"Call by Value:"<<endl;
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
}
void indirectChangeByReference(Person &p2){
    p2.name = "Yousuf";
    p2.age = 26;
}
void indirectChangebyPointer(Person *p3){
    p3->name = "Muhammad Yousuf Ali";
    p3->age = 25;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Person yousuf;
    yousuf.name = "Md. Yousuf Ali";
    yousuf.age = 25;
    /*Call by value*/
    // showInfo(yousuf);

    /*Call by reference using referrel variable*/
    cout<<"\tBefore called function()"<<endl;
    cout<<"\tName: "<<yousuf.name<<endl;
    cout<<"\tAge: "<<yousuf.age<<endl;
    indirectChangeByReference(yousuf);
    cout<<"\tAfter called function()"<<endl;
    cout<<"\tName: "<<yousuf.name<<endl;
    cout<<"\tAge: "<<yousuf.age<<endl;

    /*Call by reference using pointer*/
    cout<<"\nBefore call by pointer function()"<<endl;
    cout<<"Name: "<<yousuf.name<<endl;
    cout<<"Age: "<<yousuf.age<<endl;
    indirectChangebyPointer(&yousuf);
    cout<<"After call by pointer function()"<<endl;
    cout<<"Name: "<<yousuf.name<<endl;
    cout<<"Age: "<<yousuf.age<<endl;
    return 0;
}
