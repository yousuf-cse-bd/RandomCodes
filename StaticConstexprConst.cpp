/**
 * @file StaticConstexprConst.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Constexpr, defualt paramiter, copy constructor and operator overloading
 * @version 0.1
 * @date 2023-02-16
 * @since ThursDay; 10:20 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class StaticConstexprConst{
private:
    /* data */
    static constexpr const char *const defName {"Muhammad Yousuf Ali"};
    string name {};
public:
    StaticConstexprConst(const string_view &name = defName);
    StaticConstexprConst(const StaticConstexprConst &source):name{source.name}{
        cout<<"Copy constructor invoked"<<endl;
    }
    ~StaticConstexprConst();
private:
    friend ostream &operator<< (ostream &output, const StaticConstexprConst &staticConstexprConst);
};

StaticConstexprConst::StaticConstexprConst(const string_view &name):name{name}{}

StaticConstexprConst::~StaticConstexprConst(){}

ostream &operator<< (ostream &output, const StaticConstexprConst &staticConstexprConst){
    output<<"The name: "<<staticConstexprConst.name;
    return output;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    StaticConstexprConst staticConstexprConst1{};
    cout<<"staticConstexprConst1 = "<<staticConstexprConst1<<endl;

    StaticConstexprConst staticConstexprConst2 {"Yousuf"};
    cout<<"staticConstexprConst2 = "<<staticConstexprConst2<<endl;

    cout<<"-----------------------------------------------------------"<<endl;
    StaticConstexprConst *ptrObj1 = new StaticConstexprConst{staticConstexprConst2}; /*Called copy constructor*/
    if(ptrObj1){ /*Not nullptr*/
        cout<<"ptrObj1 = "<<*ptrObj1<<endl;
    }
    else{
        cerr<<"Memory allocation NOT done!"<<endl;
    }
    delete ptrObj1;
    ptrObj1 = nullptr;

    StaticConstexprConst copyObject {staticConstexprConst2}; /*Called copy constructor*/
    cout<<"Copy Object = "<<copyObject<<endl;
    return 0;
}
