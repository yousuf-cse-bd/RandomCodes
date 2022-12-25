/**
 * @file ConstructorAndDestructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief We have noticed normal object act FIFO or (depend on delete key-word) and HEAP object act LIFO for constructors-destructors
 * @version 0.1
 * @date 2022-12-25
 * @since SunDay; 11:37 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class MyClass{
    const string name {};
public:
    MyClass(const string name):name{name}{
        cout<<"Constructor for "+ name<<endl;
    }
    ~MyClass(){
        cout<<"Destructor of "+name<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*We can predict when the destructor will be called by delete key-word*/
    MyClass *newObject1 = new MyClass{"NewObject1"};
    delete newObject1; /*Destructor called*/
    MyClass *newObject2 = new MyClass{"NewObject2"};
    delete newObject2; /*Destructor called*/
    cout<<"-----------------------------------------------"<<endl;
    /**
     * @brief Mainly maintain LIFO order
     * @brief Firstly calls constructor for myObject1
     * @brief Secondly calls constructor for myObject2
     * @brief Now calls destructor for myObject2
     * @brief Secondly calls constructor for myObject1
     */
    MyClass myObject1{"MyObject1"};

    MyClass myObject2{"MyObject2"};

    MyClass myObject3{"MyObject3"};
    
    
    return 0;
}
