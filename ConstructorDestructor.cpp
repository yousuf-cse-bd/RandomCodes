/**
 * @file ConstructorDestructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Constructor, destructor and string_view
 * @version 0.1
 * @date 2023-02-10
 * @since FriDay; 10:15 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <string_view>
#pragma pack(1)
using namespace std;

class Dog{
    /*Member Variables*/
private:    
    string name {};
    string breed {};
    int *ptrAge {nullptr};

    /*Member Methods*/
public:
    Dog(){
        // cout<<"Defualt constructor"<<endl;
        ptrAge = new int; /*Allocating at HEAP portion of RAM*/
    }
    Dog(const string_view &name, const string_view &breed, const int age):Dog{}{ /*Extra: const and '&'*/
        this->name = name;
        this->breed = breed;
        *ptrAge = age;
        cout<<"Contructor called for: "<<name<<endl;
    }
    ~Dog(){
        cout<<"Destructor called for: "<<name<<endl;
    }

    const void showInfo(void);
};

const void Dog::showInfo(void){
    cout<<"The dog name: "<<name<<endl;
    cout<<"The breed name: "<<breed<<endl;
    cout<<"The age: "<<*ptrAge<<endl;
}

const void simpleFunction(void){
    Dog dog {"Fluffy", "Shepherd", 2};
    dog.showInfo();
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    simpleFunction();
    cout<<"Done!!!"<<endl;
    return 0;
}
