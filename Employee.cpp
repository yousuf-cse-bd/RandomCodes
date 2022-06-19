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
    Employee employee2 = Employee("John", "Amazone", 35);
    employee2.intoduceYourSelf();

    return 0;
}
