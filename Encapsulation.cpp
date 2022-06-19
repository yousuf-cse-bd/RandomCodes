#include <iostream>
using namespace std;

class Employee
{
    string Name, Company;
    int Age;

    public:
    Employee(string name, string company, int age)
    {
        Name = name, Company = company, Age = age;
    }

    //setterMethods
    void setName(string name)
    {
        Name = name;
    }
    void setCompany(string company)
    {
        Company = company;
    }

    void setAge(int age)
    {
        if(age >= 18)
        Age = age;
    }

    //getterMethods

    string getName(){ return Name;}
    string getCompany(){return Company;}
    int getAge(){return Age;}
    void intoduceYourSelf()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Company Name: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl; 
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25);
    employee1.intoduceYourSelf();

    cout<<endl;
    employee1.setAge(15);
    employee1.intoduceYourSelf();

    // cout<<endl;
    // Employee employee2 = Employee("John", "Amazone", 35);
    // employee2.intoduceYourSelf();

    return 0;
}
