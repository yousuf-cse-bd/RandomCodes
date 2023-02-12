/**
 * @file ThisPointerApplication3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of this pointer with setter and getter mathods
 * @version 0.1
 * @date 2023-02-12
 * @since SunDay; 11:25 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class ThisPointerApplication{
    string name{};
    string id {};
    string deptName{};

public:
    ThisPointerApplication() = default;
    ~ThisPointerApplication () = default;

    ThisPointerApplication *setName(const string_view &name){
        this->name = name;
        return this;
    }

    ThisPointerApplication *setId(const string_view &id){
        this->id = id;
        return this;
    }

    ThisPointerApplication *setDeptName(const string_view &deptName){
        this->deptName = deptName;
        return this;
    }


    ThisPointerApplication *getName(void){
        cout<<"The name: "<<name<<endl;
        return this;
    }
    ThisPointerApplication *getId(void){
        cout<<"The id: "<<id<<endl;
        return this;
    }
    ThisPointerApplication *getDeptName(void){
        cout<<"The dept name: "<<deptName<<endl;
        return this;
    }

};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    ThisPointerApplication object1{};
    object1.setName("Yousuf")->setId("171311101")->setDeptName("CSE");
    object1.getName()->getId()->getDeptName();

    cout<<"--------------------------------------"<<endl;
    ThisPointerApplication *ptrObject = new ThisPointerApplication{};
    if(ptrObject != nullptr){
        ptrObject->setName("Mithu")->setId("171311105")->setDeptName("EEE");
        ptrObject->getName()->getId()->getDeptName();
    }
    else{
        cout<<"Not memory allocated..!"<<endl;
        exit(0);
    }
    delete ptrObject;
    ptrObject = nullptr;

    return 0;
}
