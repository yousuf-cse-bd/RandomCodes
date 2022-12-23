/**
 * @file DeepCopyConstructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Deep copy - create new storage and copy values
 * @version 0.1
 * @date 2022-12-23
 * @since FriDay; 10:32 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class DeepCopyConstructor{
    /*Class attributes or member varibles*/
private:
    int *data{nullptr};
    /*Class methods or member functions*/
public:
    DeepCopyConstructor(int d){
        cout<<"Single paramiterized constructor"<<endl;
        data = new int;
        *data = d;
    }
    /*Copy constructor; In copy constructor use const for best practice*/
    /*Deep copy - create new storage and copy values*/
    DeepCopyConstructor(const DeepCopyConstructor &source):DeepCopyConstructor{*source.data}{ /*Deep copy used delegating-constructor*/
        cout<<"Copy constructor - deep copy"<<endl;
    }
    ~DeepCopyConstructor(){
        delete data;
        cout<<"\tDestructor freeing data."<<endl;
    }
    void setData(int d){*data = d;}
    int getData(void){return *data;}

};
/*When deepCopyConstructor(object) out of the scope the destructor is called and relase data.
NoProblem: since the storage being release is unique to deepCopyConstructor(object)*/
void display(DeepCopyConstructor deepCopyConstructor){
    cout<<deepCopyConstructor.getData()<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DeepCopyConstructor obj1{100};
    display(obj1);
    DeepCopyConstructor obj2{obj1};
    obj2.setData(1000);
    display(obj2);
    return 0;
}
