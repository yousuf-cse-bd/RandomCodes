/**
 * @file ClassWithPointerObject.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Class and pointer type object accessing member variable
 * @version 0.1
 * @date 2022-09-14
 * @since WednesDay; 06:54 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

class ClassWithPointerObject
{
private:
    /* data */
public:
    int id;
    ClassWithPointerObject(/* args */){}
    ~ClassWithPointerObject(){}
};

struct StructWithPointerObject
{
    /* data */
    int id;
};



int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    StructWithPointerObject normalInstance, *pointerInstance;
    pointerInstance = &normalInstance; 
    pointerInstance->id = 101;
    cout<<"My Part of ID: "<<pointerInstance->id<<endl;
    cout<<"Address: "<<pointerInstance<<endl;

    ClassWithPointerObject *ptrObject = new ClassWithPointerObject();
    ptrObject->id = 1713111101;
    cout<<"My ID Value: "<<ptrObject->id<<endl; /*Output: Value*/
    cout<<"My ID Address: "<<ptrObject<<endl;//output: Memory Address
    delete pointerInstance;
    delete ptrObject;
    return 0;
}
