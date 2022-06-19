#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee
{
    string CompanyName;
    int Age;

    protected:
    string Name;

    public:
    Employee(string name, string companyName, int age)
    {
        Name = name, CompanyName = companyName, Age = age;
    }

    //Seter Methods
    void setName(string name){ Name = name;}
    void setComapanyName(string companyName){ CompanyName = companyName;}
    void setAge(int age){ Age = age;}

    //Geter Methods
    string getName(){return Name;}
    string getCompanyName(){return CompanyName;}
    int getAge(){return Age;}

    void askForPromotion()
    {
        if(Age > 30)
        cout<<Name<<" got promoted!"<<endl;
        else
        cout<<Name<<", sorry NO promotion for you!"<<endl;
    }

};

class Teacher : Employee
{

};

class Developer : public Employee
{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string companyName, int age, string favProgrammingLanguage):
    Employee(name, companyName, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug()
    {
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    Developer developer1 = Developer("Saldina", "YT-CodeBeauty", 25, "C++");
    developer1.FixBug();
    developer1.askForPromotion();

    return 0;
}
