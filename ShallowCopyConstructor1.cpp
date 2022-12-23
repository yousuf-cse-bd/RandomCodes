/**
 * @file ShallowCopyConstructor1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The newly created object BOTH point to the SAME data area and program crash
 * @version 0.1
 * @date 2022-12-23
 * @since FriDay; 10:17 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Shallow{
    /*Class attributed or member variables*/
private:
    int *data;
public:
    Shallow(int d){
        cout<<"Single parameterized constructor."<<endl;
        data = new int;
        *data = d;
    }
    /*Copy constructor*/
    Shallow(const Shallow &source): data{source.data}{ /*Shallow copy syntax*/
        cout<<"Copy constructor - shallow copy"<<endl;
    }
    ~Shallow(){
        delete data;
        cout<<"\t\tDestructor freeing data."<<endl;
    }
    int inline getData(void){return *data;}
    void inline setData(int d){*data = d;}
};

/*Regular function*/
void standAloneFunction(Shallow shallow){
    cout<<"The data: "<<shallow.getData()<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Shallow obj1{100};
    standAloneFunction(obj1);
    Shallow obj2{obj1};
    obj2.setData(1001);
    standAloneFunction(obj2);
    
    return 0;
}
