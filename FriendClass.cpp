/**
 * @file FriendClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Friend class friend key word
 * @version 0.1
 * @date 2022-10-26
 * @since WednesDay; 10:04 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class A{
private:
    int aVariable;
public:
    A(){aVariable = 10;}
    friend class B;
};

class B{
private:
    int bVariable;
public:
    B(){bVariable = 0;}
    void getData(A &a){
        bVariable = a.aVariable;
        a.aVariable = 150;
    }
    void showData(A &a){
        // cout<<"A var: "<<aVariable<<endl;
        cout<<"B var: "<<bVariable<<endl;
        cout<<"A var: "<<a.aVariable<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    A a1; B b1;
    b1.getData(a1);
    b1.showData(a1);
    return 0;
}
