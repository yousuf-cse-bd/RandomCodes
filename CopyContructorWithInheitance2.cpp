/**
 * @file CopyContructorWithInheitance2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief SubClass(const SubClass &source):SuperClass{source}, y{source.y}{}
 * @version 0.1
 * @date 2023-02-17
 * @since FriDay; 10:34 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class SuperClass{
    /*Operator overloading*/
    friend ostream &operator<< (ostream &output, const SuperClass &superClass){
        output<<"SuperClass: ["<<superClass.x<<"]";
        return output;
    }
protected:
    int x {};
public:
    /*Default constructor of SuperClass*/
    SuperClass(){
        cout<<"Defautl constructor for SuperClass."<<endl;
    }
    /*Custom constructor of SuperClass*/
    SuperClass(const int &x):x{x}{
        cout<<"Custom constructor for SuperClass."<<endl;
    }
    /*Copy constructor of SuperClass*/
    SuperClass(const SuperClass &source):x{source.x}{
        cout<<"*Copy constructor for SuperClass."<<endl;
    }
    ~SuperClass() = default; /*Destructor*/
};

class SubClass : public SuperClass{
    friend ostream &operator<< (ostream &output, const SubClass &subClass){
        output<<"SubClass:["<<subClass.x<<", "<<subClass.y<<"]";
        return output;
    }
private: 
    int y {};
public:
    /*Default constructor of SubClass*/
    SubClass(){
        cout<<"Defualt constructor for SubClass."<<endl;
    }
    /*Custom constructor for SubClass*/
    SubClass(const int &x, const int &y):SuperClass{x}, y{y}{
        cout<<"Custom constructor for SubClass."<<endl;
    }  
    /*Copy constructor of Subclass*/ /*Worst practice*/
    // SubClass(const SubClass &source):SuperClass{source.x}, y{source.y}{
    //     cout<<"*Copy constructor for SubClass."<<endl;
    // }
    /*Copy constructor of Subclass*/ /*Best practice*/
    SubClass(const SubClass &source):SuperClass{source}, y{source.y}{ /*Main important things*/
        cout<<"*Copy constructor for SubClass."<<endl;
    }
    ~SubClass() = default; /*Destructor*/
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    SubClass subObject1{10, 20};
    cout<<"subObject1 = "<<subObject1<<endl;
    cout<<"--------------------------------------"<<endl;
    SubClass subObject2{subObject1};
    cout<<"subObject2 = "<<subObject2<<endl;

    cout<<"=========================================="<<endl;
    SubClass *pSubObject = new SubClass{subObject2};
    if(pSubObject){
        cout<<"*pSubObject = "<<*pSubObject<<endl;
    }
    else{
        cout<<"Memory allocation NOT done..!"<<endl;
    }
    delete pSubObject;
    pSubObject = nullptr;
    printf("Happy Ending...!%c %c %c\n", 2, 2, 2);
    return 0;
}
