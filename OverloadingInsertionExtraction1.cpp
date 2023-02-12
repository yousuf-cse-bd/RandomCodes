/**
 * @file OverloadingInsertionExtraction1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloading (>> & <<) with application  of friend key-word
 * @version 0.1
 * @date 2023-02-12
 * @since SunDay; 10:58 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class ObjectReturn{
private:
    string x{};
public:
    ObjectReturn(const string_view x = ""):x{x}{
        /*Single DEFAULT parameterized constructor*/
    }
    ~ObjectReturn() = default;

    /*Friend key word is essential either public or private*/
    friend istream &operator >> (istream &input, ObjectReturn &objectReturn){ /*Don't use const*/
        input >> objectReturn.x;
        return input;
    }
    friend ostream &operator <<(ostream &output, const ObjectReturn &objectReturn){
        output << objectReturn.x;
        return output;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ObjectReturn object1{};
    cout<<"Input a object1 here: ";
    cin>>object1;
    cout<<"The object: "<<object1<<endl;

    ObjectReturn object2 {};
    cout<<"Input a object2 here: ";
    cin>>object2;
    cout<<"The object2: "<<object2<<endl;

    // cout<<"-----------------------------------------------------"<<endl;
    // ObjectReturn *ptrObject1 = new ObjectReturn(); /*Heap not support this mechanism*/
    // if(ptrObject1 != nullptr){
    //     cout<<"Input object here: ";
    //     cin>>ptrObject1;
    //     cout<<"The object: "<<ptrObject1<<endl;
    // }
    // else{
    //     cerr<<"Memory allocation is not success...!"<<endl;
    // }
    
    // delete ptrObject1;
    // ptrObject1 = nullptr;
    
    return 0;
}
