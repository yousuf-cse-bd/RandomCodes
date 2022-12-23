/**
 * @file NameTermWithDefaultParameterizedConstructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief An application using Default parameterized constructor
 * @version 0.1
 * @date 2022-12-23
 * @since SaturDay; 12:04 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class NameTerms{
    /*Class Attributes or Member Variables*/
private:
    const string firstName{};
    string middleName{}, lastName{};
    /*Class Methods or Member Functions*/
public:
    NameTerms(const string firstName = "", string middleName = "", string lastName = ""):firstName{firstName}, middleName{middleName}, lastName{lastName}{
        cout<<"\tDefault parameterized constructor"<<endl;

        if(firstName.length() != 0 && middleName.length() == 0 && lastName.length() == 0){
            displaySingleName();
        }else if(firstName.length() != 0 && middleName.length() != 0 && lastName.length() == 0){
            this->lastName = middleName;
            displayDoubleNames();
        }else if(firstName.length() != 0 && middleName.length() != 0 && lastName.length() != 0){
            displayTripleNames();
        } 
    }

    void displaySingleName(void){
        cout<<"The name: "<<firstName<<endl;
    }
    void displayDoubleNames(void){
        cout<<"First name: "<<firstName<<endl;
        cout<<"Last name: "<<lastName<<endl;
    }
    void displayTripleNames(void){
        cout<<"First name: "<<firstName<<endl;
        cout<<"Middle name: "<<middleName<<endl;
        cout<<"Last name: "<<lastName<<endl;
    }

};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    NameTerms singleName{"Yousuf"};
    // cout<<"Size of single-name: "<<sizeof(singleName)<<endl;
    NameTerms doubleNames{"Yousuf", "Ali"};
    // cout<<"Size of double-names: "<<sizeof(doubleNames)<<endl;
    NameTerms tripleNames{"Muhammad", "Yousuf", "Ali"}; /*FirstName, MiddleName, LastName*/
    // cout<<"Size of triple-names: "<<sizeof(tripleNames)<<endl;

    return 0;
}
