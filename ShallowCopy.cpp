/**
 * @file ShallowCopy.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief When we release the storage in the destructor, the other object still refers to the release storage
 * @version 0.1
 * @date 2022-12-23
 * @since FriDay; 10:22 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class ShallowCopy{
private:
    int *data;
public:
    void setDataValue(int d){*data = d;}
    int getDataValue(void){return *data;}
    /*Constructor*/
    ShallowCopy(int d);
    /*Copy constrcutor*/
    ShallowCopy(const ShallowCopy &source);
    /*Destructo*/
    ~ShallowCopy();
};

ShallowCopy :: ShallowCopy(int d){
    data = new int;
    *data = d;
}

ShallowCopy ::ShallowCopy(const ShallowCopy &source):data{source.data}{ /*Shallow copy syntax*/
    cout<<"Copy constructor - shallow copy"<<endl;
}
ShallowCopy ::~ShallowCopy(){
    delete data;
    cout<<"Destructor freeing data."<<endl;
}
void display(ShallowCopy shallowCopy){
    cout<<shallowCopy.getDataValue()<<endl;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ShallowCopy obj1{100};
    display(obj1);
    ShallowCopy obj2{obj1};
    obj2.setDataValue(1000);
    display(obj2);
    system("pause > 0");
    return 0;
}
