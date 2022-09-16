/**
 * @file StructuredReturnValueOfFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Return value all type of function-structured
 * @version 0.1
 * @date 2022-09-16
 * @since FriDay; 10:39 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

struct StructuredReturnValueOfFunction
{
    /* data */
    string name;
    unsigned int age;
};
/*Return instance1 type value using without parameter*/
StructuredReturnValueOfFunction function1(void){
    StructuredReturnValueOfFunction instance1;
    instance1.name = "Yousuf Ali";
    instance1.age = 25;

    return instance1;
}
/*Return instance2 type address using without parameter*/
StructuredReturnValueOfFunction *function2(void){
    StructuredReturnValueOfFunction *instance2;
    instance2 = (StructuredReturnValueOfFunction*) malloc(sizeof(StructuredReturnValueOfFunction));
    instance2->name = "Md Yousuf Ali";
    instance2->age = 26;

    return instance2;
}

/*Return instance3 type value using with parameter*/
StructuredReturnValueOfFunction function3(StructuredReturnValueOfFunction instance3){
    instance3.name = "Tofayel Tamim";
    instance3.age = 16;
    return instance3;
}

/*Return instance3 type address using with parameter*/
StructuredReturnValueOfFunction *function4(StructuredReturnValueOfFunction *instance4){
    instance4 = (StructuredReturnValueOfFunction*) malloc(sizeof(StructuredReturnValueOfFunction));
    instance4->name = "Tofayel Ahmad Tamim";
    instance4->age = 16;
    return instance4;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    StructuredReturnValueOfFunction yousuf, *yousufPtr;
    yousuf = function1();
    cout<<"Name: "<<yousuf.name<<endl;
    cout<<"Age: "<<yousuf.age<<endl;

    yousufPtr = function2();
    cout<<"Name: "<<yousufPtr->name<<endl;
    cout<<"Age: "<<yousufPtr->age<<endl;

    StructuredReturnValueOfFunction tamim, *tamimPtr;
    tamim = function3(tamim);
    cout<<"Nephew Name: "<<tamim.name<<endl;
    cout<<"Nephew Age: "<<tamim.age<<endl;

    tamimPtr = function4(tamimPtr);
    cout<<"Nephew Name: "<<tamimPtr->name<<endl;
    cout<<"Nephew Age: "<<tamimPtr->age<<endl;

    return 0;
}
