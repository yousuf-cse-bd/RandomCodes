// Passing structure to function
#include <iostream>
using namespace std;

struct Address
{
    /* data */
    char city[20];
    int pin;
    char phone[14];
};

struct Employee
{
    /* data */
    char name[20];
    struct Address add; // by separate structure declared
};

void display(struct Employee empParaMeter)
{
    cout<<"Employee Name: "<<empParaMeter.name<<endl;
    cout<<"Employee City Name: "<<empParaMeter.add.city<<endl;
    cout<<"Employee Pin Number: "<<empParaMeter.add.pin<<endl;
    cout<<"Employee Phone Number: "<<empParaMeter.add.phone<<endl;
}


int main(int argc, char const *argv[])
{
    /* code */
    struct Employee emp;
    cout<<"Enter Employee Information?"<<endl;
    cout<<"Enter Employee Name: ";
    cin>>emp.name;
    cout<<"Enter Employee City Name: ";
    cin>>emp.add.city;
    cout<<"Enter Employee Pin Number: ";
    cin>>emp.add.pin;
    cout<<"Enter Employee Phone Number: ";
    cin>>emp.add.phone;

    cout<<"Dispaly the information..."<<endl;
    display(emp);
    return 0;
}
