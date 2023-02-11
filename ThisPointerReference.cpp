/**
 * @file ThisPointerReference.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief This pointer reference is same for HEAP memory and not normal object
 * @version 0.1
 * @date 2023-02-11
 * @since SaturDay; 04:10 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class ThisPointer{
public:
    ThisPointer(){
        cout<<this<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    ThisPointer this1{};
    ThisPointer this2{};
    cout<<"-------------------------------"<<endl;
    ThisPointer *ptrThis1 = new ThisPointer{};
    delete ptrThis1;
    ptrThis1 = nullptr;

    ThisPointer *ptrThis2 = new ThisPointer{};
    delete ptrThis2;
    ptrThis2 = nullptr;

    ThisPointer *ptrThis3 = new ThisPointer{};
    delete ptrThis3;
    ptrThis3 = nullptr;

    return 0;
}
