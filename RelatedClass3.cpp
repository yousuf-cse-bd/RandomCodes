/**
 * @file RelatedClass3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Just finding related class for geometrical system
 * @version 0.1
 * @date 2023-02-12
 * @since SunDay; 11:16 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Shape{
public:
    Shape() = default;
    ~Shape() = default;
};

class Line : public Shape{
public:
    Line() = default;
    ~Line() = default;
};

class Oval : public Shape{
public:
    Oval() = default;   
    ~Oval() = default;
};

class Circle : public Shape{
public:
    Circle() = default;
    ~Circle() = default;
};

class Square : public Shape{
public:
    Square() = default;
    ~Square() = default;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    return 0;
}
