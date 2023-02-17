/**
 * @file CopyConstructor3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pass by value, reference and pointer reference for copy constructor
 * @version 0.1
 * @date 2023-02-17
 * @since FriDay; 10:29 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class CopyConstructor{
public:
    CopyConstructor(){
        cout<<"Defualt constructor"<<endl;
    }
    ~CopyConstructor(){
        cout<<"\tDestructor"<<endl;
    }
    CopyConstructor(const CopyConstructor &source){
        cout<<"Copy constructor"<<endl;
    }
};
/*Pass by reference operator*/
const void standAloneFunction1(const CopyConstructor &copyConstructor){
    /*No create new object here*/
}
/*Pass by pointer reference operator*/
const void standAloneFunction2(const CopyConstructor *copyConstructor){
    /*No create any object but objective pointer reference*/
}
/*Pass by value or object*/
const void standAloneFunction3(const CopyConstructor copyConstructor){
    /*An object is created by this function*/
    /*Yet also called destructor*/
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    CopyConstructor copyConstructor{};
    standAloneFunction1(copyConstructor); /*Call by reference*/
    standAloneFunction2(&copyConstructor); /*Call by pointer reference*/
    standAloneFunction3(copyConstructor); /*Call by value/object*/

    return 0;
}
