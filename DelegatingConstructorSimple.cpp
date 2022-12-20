/**
 * @file DelegatingConstructorSimple.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Default constructor used as a delegation constructor
 * @version 0.1
 * @date 2022-12-20
 * @since TuesDay; 11:36 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class MyClass{
private:
    /*Class attributes or member variables*/
    int num1{}, num2{}, num3{};
public: 
    /*Class methods or member functions*/
    MyClass():num1{0}, num2{0},num3{0}{ /*Better initialization*/
        cout<<"Default constructor"<<endl;
    }
    MyClass(const int num3):MyClass(){ /*Using constructor delegation feature*/
        this->num3 = num3; 
        cout<<"Single parameterize constructor"<<endl;
    }
    void display(void){
        cout<<"Num1: "<<num1<<endl;
        cout<<"Num2: "<<num2<<endl;
        cout<<"Num3: "<<num3<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    MyClass myObject{101};
    myObject.display();

    return 0;
}
