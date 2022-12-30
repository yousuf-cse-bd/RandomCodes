/**
 * @file OperatorOverloading1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloading calls without copy constructor
 * @version 0.1
 * @date 2022-12-30
 * @since FriDay; 10:41 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Rectangle{
private:
    size_t height{}, width{};
public:
    Rectangle(const size_t height = 0, const size_t width = 0):height{height}, width{width}{}
    Rectangle(const Rectangle &source):Rectangle{source.height, source.width}{
        cout<<"Copy constructor called"<<endl;
    }
    Rectangle operator +(size_t x){
        Rectangle temp{
        temp.height = height + x,
        temp.width = width + x};
        // temp.height = height + x;
        // temp.width = width + x;
        return temp;
    }
    void showData(void)const{
        cout<<"Height: "<<height<<"\tWidth: "<<width<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Rectangle rectangle1{50, 75}, rectangle2;
    rectangle2 = rectangle1 + 25; /*Here does not call copy constructor*/
    rectangle1.showData();
    rectangle2.showData();
    /*-----------------------------------------------*/
    Rectangle rectangle3{50, 75};
    Rectangle rectangle4{rectangle3 + 25}; /*Here does not call copy constructor*/
    rectangle3.showData();
    rectangle4.showData();

    Rectangle rectangle5 {rectangle4}; /*Here call copy-constructor*/
    return 0;
}
