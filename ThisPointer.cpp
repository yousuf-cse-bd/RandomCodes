#include <iostream>
using namespace std;

class Employee
{
    int id; //data member (also instance variable) all 3
    string name;
    float salary;
public:
    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout<<"ID: "<<id<<"\tName: "<<name<<"\tSalary: "<<salary<<endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    Employee e1 = Employee(101,"Yousuf", 50000);
    Employee e2 = Employee(102, "Sumon", 10000);
    e1.display();
    e2.display();
    return 0;
}
