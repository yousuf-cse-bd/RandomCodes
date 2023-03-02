/**
 * @file ObjectCounterByStaticVarable.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Counting object using static variable Heap or stack memory
 * @version 0.1
 * @date 2023-03-02
 * @since ThursDay; 10:10 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Test{
public:
    static size_t counter;
    Test(){
        counter++;
    }
    ~Test(){
        cout<<"~Destructor~"<<endl;
    }
};
/*Globally initialization*/
size_t Test :: counter = 0;


int main(int argc, const char *const argv[]){
    Test *object = new Test[15];
    if(object){
        cout<<"Object counter: "<<Test::counter<<endl;
    }
    else{
        cerr<<"Memory allocation is NOT done for Test class!!!"<<endl;
    }
    
    delete []object;
    object = nullptr;
    /*Locally initialization*/
    Test :: counter = 0;
    Test t[10];
    cout<<"Object counter: "<<Test::counter<<endl;
    cout<<"\nHappyEndin..!"<<endl;
    return 0;
}