#include <iostream>
using namespace std;

class Account
{
    int accountNo;//data member(also instance variable)
    string name;
    //a static variable, which does not support object
    static float rateOfInterest;//used to scope resolution operator(::) reffer class name

public:
    static int count;//used to scope resolution operator(::) reffer class name
    Account(int accountNo, string name)
    {
        this->accountNo  = accountNo;
        this->name = name;
        count++;
    }

    void display()
    {
        cout<<accountNo<<"\t\t"<<name<<"\t\t"<<rateOfInterest<<endl;
    }

};
//Syntax for static variable assigning
float Account :: rateOfInterest = 6.5; //for static variable
int Account :: count = 0; //This is mandatory to assign it out of class block


int main(int argc, char const *argv[])
{
    /* code */

    Account a1 = Account(101, "Yousuf");
    Account a2 = Account(102, "Sumon");
    Account a3 = Account(105, "Murshid");

    cout<<"ID\t\tName\t\tInterest\n";
    cout<<"--\t\t----\t\t--------"<<endl;
    //calling the member function
    a1.display();
    a2.display();
    a3.display();

    cout<<"\nTotal Object Are: "<<Account::count<<endl;

    return 0;
}
