/**
 * @file RelatedClass4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Just finding related class for institute system
 * @version 0.1
 * @date 2023-02-12
 * @since SunDay; 11:24 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Person{
public:
    Person() = default;
    ~Person() = default;
};

class Employee : public Person{
public:
    Employee() = default;
    ~Employee() = default;
};

class Student : public Person{
public:
    Student() = default;
    ~Student() = default;
};

class Faculty : public Person{
public: 
    Faculty() = default;
    ~Faculty() = default;
};

class Staff : public Person{
public:
    Staff() = default;
    ~Staff() = default;
};

class Administrator : public Person{
public:
    Administrator() = default;
    ~Administrator() = default;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    return 0;
}
