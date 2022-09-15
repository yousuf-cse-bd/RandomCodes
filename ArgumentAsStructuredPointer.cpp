/**
 * @file ArgumentAsStructuredPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Structured pointer variable as argument
 * @version 0.1
 * @date 2022-09-15
 * @since ThursDay; 05:50 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

struct Person{
    string name;
    string campusName;
    int age;
};

void showInfo(Person *me){
    cout<<"Name: "<<me->name<<endl;
    cout<<"University: "<<me->campusName<<endl;
    cout<<"Age: "<<me->age<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Person yousuf, *yousufPtr;
    yousufPtr = &yousuf;
    yousuf.name = "Md. Yousuf Ali";
    yousuf.campusName = "Varendra University, Rajshahi, Bangladesh";
    yousuf.age = 25;
    /*Call by reference using sturctured pointer*/
    showInfo(yousufPtr);
    /*call by reference normal intance using reference operator*/
    showInfo(&yousuf);
    return 0;
}
