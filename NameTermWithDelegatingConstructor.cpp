/**
 * @file NameTermWithDelegatingConstructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief An application using delegating constructor
 * @version 0.1
 * @date 2022-12-23
 * @since FriDay; 11:22 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class NameTerms1{ /*Type 1*/
    /*Class attributes or member variables*/
private:
    const string firstName{}, middleName{}, lastName{};
public:
    /*Class methods or member functions*/
    NameTerms1():NameTerms1{"", "", ""}{
        cout<<"\tDefault constructor"<<endl;
    }
    NameTerms1(const string firstName):NameTerms1{firstName, "", ""}{
        cout<<"\tSingle parameterized constructor"<<endl;
        cout<<"In Constructor: "<<firstName<<endl;
    }
    NameTerms1(const string firstName, const string lastName):NameTerms1{firstName, "", lastName}{
        cout<<"\tTwo parameterized constructor"<<endl;
        cout<<"In Constructor: "<<firstName<<"\t"<<lastName<<endl;

    }
    NameTerms1(const string firstName, const string middleName, const string lastName):firstName{firstName}, lastName{lastName}, middleName{middleName}{ /*make rearrange*/
        cout<<"\tThree parameterized constructor"<<endl;
        cout<<"In Constructor: "<<firstName<<"\t"<<middleName<<"\t"<<lastName<<endl;
    }
    void displayNone(void){
        cout<<"Name are emty...!"<<endl;
    }
    void displaySingleName(void){
        cout<<"The name: "<<firstName<<endl;
    }
    void displayDoubleNames(void){
        cout<<"The first name: "<<firstName<<"\nLast name: "<<lastName<<endl;
    }
    void displayTrpleNames(void){
        cout<<"The first name: "<<firstName<<endl;
        cout<<"Middle name: "<<middleName<<endl;
        cout<<"Last name: "<<lastName<<endl;
    }
};

class NameTerms2{ /*Type 2*/
    /*Class attributes or member variables*/
private:
    string firstName{}, middleName{}, lastName{};
public:
    /*Class methods or member functions*/
    NameTerms2():firstName{}, middleName{}, lastName{}{ /*Better initialization*/
        cout<<"\tDefault constructor"<<endl;
    }
    NameTerms2(const string firstName):NameTerms2(){ /*Delegating constructor*/
        this->firstName = firstName;
        cout<<"\tSingle parameterized constructor"<<endl;
        cout<<"In Constructor: "<<firstName<<endl;
    }
    NameTerms2(const string firstName, const string lastName):NameTerms2(){ /*Delegating constructor*/
        this->firstName = firstName, this->lastName = lastName;
        cout<<"\tTwo parameterized constructor"<<endl;
        cout<<"In Constructor: "<<firstName<<"\t"<<lastName<<endl;

    }
    NameTerms2(const string firstName, const string middleName, const string lastName):NameTerms2(){ /*Delegating constructor*/
        this->firstName = firstName, this->middleName = middleName, this->lastName = lastName;
        cout<<"\tThree parameterized constructor"<<endl;
        cout<<"In Constructor: "<<firstName<<"\t"<<middleName<<"\t"<<lastName<<endl;
    }
    void displayNone(void){
        cout<<"Name are emty...!"<<endl;
    }
    void displaySingleName(void){
        cout<<"The name: "<<firstName<<endl;
    }
    void displayDoubleNames(void){
        cout<<"The first name: "<<firstName<<"\nLast name: "<<lastName<<endl;
    }
    void displayTrpleNames(void){
        cout<<"The first name: "<<firstName<<endl;
        cout<<"Middle name: "<<middleName<<endl;
        cout<<"Last name: "<<lastName<<endl;
    }
};
/*Driver main code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    NameTerms1 singleName1{"Yousuf"};
    // singleName1.displaySingleName();

    NameTerms1 doubleNames1{"Yousuf", "Ali"};
    // doubleNames1.displayDoubleNames();

    NameTerms1 tripleNames1{"Muhammad", "Yousuf", "Ali"};
    // tripleNames1.displayTrpleNames();
    cout<<"-------------------------------------------------------------"<<endl;
    NameTerms2 singleName2{"Yousuf"};
    // singleName2.displaySingleName();

    NameTerms2 doubleNames2{"Yousuf", "Ali"};
    // doubleNames2.displayDoubleNames();

    NameTerms2 tripleNames2{"Muhammad", "Yousuf", "Ali"};
    // tripleNames2.displayTrpleNames();
    return 0;
}
