/**
 * @file FriendKeyWord.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief friend key word example class and fucntion
 * @version 0.1
 * @date 2022-10-26
 * @since WednesDay; 10:23 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class A{
private:
    int aPvtVar;
public:
    A(){aPvtVar = 101;}
    friend class B;
    friend void function(A);
};

class B{
public:
    void accessTheClassAVar(A &a){
        cout<<a.aPvtVar<<endl;
    }
};
void function(A a){
    cout<<a.aPvtVar<<endl;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    A a1; B b1;
    b1.accessTheClassAVar(a1);
    function(a1);
    return 0;
}
