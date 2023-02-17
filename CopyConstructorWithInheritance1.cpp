/**
 * @file CopyConstructorWithInheritance1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The shallow copy constructor with single inheritance
 * @version 0.1
 * @date 2023-02-18
 * @since FriDay; 12:31 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Person{
private: /*Operator overloading*/
    friend ostream &operator<< (ostream &output, const Person &person){
        output<<"Person: ["<<person.fullName<<", "<<person.deptName<<"]";
        return output;
    }
protected:
    string fullName {};
    string deptName {};
public:
    /*Defualt constructor of Person class*/
    Person(){
        cout<<"Default constrcutor of Person class."<<endl;
    }
    /*Custom constructor of Person class*/
    Person(const string_view &fullName, const string_view &deptName):fullName{fullName}, deptName{deptName}{
        cout<<"Custom constructor of Person class."<<endl;
    }
    /*Copy constructor (shallow) of Person class*/
    Person(const Person &source):fullName{source.fullName}, deptName{source.deptName}{
        cout<<"*Copy constrcutor of Person class."<<endl;
    }
    ~Person() = default; /*This is a destructor*/
};

class Engineer : public Person{
    friend ostream &operator<< (ostream &output, const Engineer &engineer){
        output<<"Engineer: ["<<engineer.fullName<<", "<<engineer.deptName<<", "<<engineer.address<<"]";
        return output;
    }
private:
    string address {};

public:
    /*Defualt constructor of Engineer class*/
    Engineer(){
        cout<<"Defualt constructor of Engineer class."<<endl;
    }
    /*Custom constructor of Engineer class*/
    Engineer(const string_view &fullName, const string_view &deptName, string address)
        : Person{fullName, deptName}, address{address}{
        cout<<"Custom constructor of Engineer class."<<endl;
    }
    /*Copy constructor of Engineer class*/
    Engineer(const Engineer &source):Person{source}, address{source.address}{
        cout<<"*Copy constructor of Engineer class."<<endl;
    }
    ~Engineer() = default; /*This is a destructor*/
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Engineer engineer1 {"Md. Yousuf Ali", "CSE", "Rajshahi"};
    cout<<"engineer1 = "<<engineer1<<endl;
    cout<<"------------------------------------------------"<<endl;

    Engineer engineer2 {engineer1}; /*Copy constructor calle*/
    cout<<"engineer2 = "<<engineer2<<endl;
    cout<<"========================================="<<endl;
    Engineer *ptrEngineer1 = new Engineer{engineer2};
    if(ptrEngineer1){
        cout<<"*ptrEngineer1 = "<<*ptrEngineer1<<endl;
    }
    else{
        cerr<<"Memory allocation is NOT done..!"<<endl;
    }
    delete ptrEngineer1;
    ptrEngineer1 = nullptr;
    printf("Happy Ending...!%c %c %c\n", 2, 2, 2);
    return 0;
}

