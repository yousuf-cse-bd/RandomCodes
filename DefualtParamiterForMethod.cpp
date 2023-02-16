/**
 * @file DefualtParamiterForMethod.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Defualt paramiters as like constructor for method with this pointer
 * @version 0.1
 * @date 2023-02-16
 * @since ThursDay; 11:27 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Person{
private:
    static constexpr const char *const defFirstName {"Muhammad Yousuf"};
    static constexpr const char *const deflastName {"Ali"};
    string firstName {};
    string lastName {};
public:
    Person() = default;
    Person *setFirstName(const string_view firstName = defFirstName){
        this->firstName = firstName;
        return this;
    }
    Person *setLastName(const string_view &lastName = deflastName){
        this->lastName = lastName;
        return this;
    }
    /*This is supported single or mulitple lines*/
    friend ostream &operator<< (ostream &output, const Person &person){
        output<<"The first name: "<<person.firstName<<endl;
        output<<"The last name: "<<person.lastName;
        return output;
    }
    // string getFirstName(void) const{
    //     return firstName;
    // }
    // string getLastName(void) const {
    //     return lastName;
    // }
    ~Person() = default;
};  

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Person person1{};
    person1.setFirstName()->setLastName();
    cout<<"Person1 = "<<person1<<endl;

    Person person2{};
    person2.setFirstName("Imtiaj")->setLastName("Maruf");
    cout<<"Person2 = "<<person2<<endl;
    cout<<"----------------------------------------------------"<<endl;
    Person *pPerson = new Person{};
    if(pPerson){ /*Not nullptr*/
        pPerson->setFirstName("Tofayel")->setLastName("Tameem");
        cout<<"pPerson = "<<*pPerson<<endl;
    }
    else{
        cerr<<"Memory allocation is NOT done..!"<<endl;
    }
    delete pPerson;
    pPerson = nullptr;
    return 0;
}
