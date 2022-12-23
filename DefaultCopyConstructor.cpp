/**
 * @file DefaultCopyConstructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Defautl-Copy-Constructor: When copy constructor is not found, compiler supplies its own copy constructor
 * @version 0.1
 * @date 2022-12-23
 * @since FriDay; 11:39 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class DefautlCopyConstructor{
    /*Class attributes or member variables*/
private:    
    int data{};
    /*Class methods or member functions*/
public:
    DefautlCopyConstructor(const int data = 10):data{data}{
       cout<<"Constructor has default parameter"<<endl;
    }
    /*When copy constructor is not found, compiler supplies its own copy constructor*/
    // DefautlCopyConstructor(const DefautlCopyConstructor &source):data{source.data}{
    //     cout<<"Copy constructor called"<<endl;
    // }
    void showData(void){
        cout<<"The data: "<<data<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DefautlCopyConstructor object1{101};
    object1.showData();

    DefautlCopyConstructor object2{object1};
    object2.showData();

    DefautlCopyConstructor object3 = object1;
    object3.showData();
    return 0;
}
