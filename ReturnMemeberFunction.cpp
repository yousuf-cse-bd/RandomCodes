/**
 * @file ReturnMemeberFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function override example
 * @version 0.1
 * @date 2023-02-16
 * @since ThursDay; 10:25 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Base{
public:
    bool function(void){
        cout<<"This is base class"<<endl;
        return true; /*True false doesn't matter*/
    }
};

class Derived : public Base{
public:
    bool function(void){ /*@Override function*/
        cout<<"This is derived class"<<endl;
        return Base ::function();
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Derived d1{};
    d1.function();
    return 0;
}
