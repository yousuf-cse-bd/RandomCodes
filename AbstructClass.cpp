#include <iostream>
using namespace std;

class abstractEmployee
{
    //Mention virtual function without function definition
    virtual void askForPromotion() = 0; 
};
 
class Employee : private abstractEmployee
{
    string name, companyName;
    int age;

    public:
    Employee(string name1, string companyName1, int age1)
    {
        name = name1, companyName = companyName1, age = age1;
    }


    //Seter Mathods
    // void setName(string nm)
    // {
    //     name = nm;
    // }
    // void setCompanyName(string cmName)
    // {
    //     companyName = cmName;
    // }
    // void setAge(int a)
    // {
    //     age = a;
    // }

    // //Geter Methods

    // string getName(){ return name;}
    // string getCompanyName(){ return companyName;}
    // int getAge(){return age;}

    void askForPromotion()
    {
        if(age > 30)
        cout<<name<<" got promoted!"<<endl;
        else
        cout<<name<<", sorry NO promotion for you!"<<endl;
    }

};

int main(int argc, char const *argv[])
{
    /* code */

    Employee employee1 = Employee("Saldina", "YT-BeautyCode", 25);
    Employee employee2 = Employee("John", "Amazone", 35);
    employee1.askForPromotion();
    employee2.askForPromotion();

    return 0;
}
