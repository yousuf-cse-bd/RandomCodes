#include <iostream>
using namespace std;
// Nested Structure: By Separate
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
    struct Address address;
};



int main(int argc, char const *argv[])
{
    /* code */
    struct Employee emp;
    cout<<"Enter Employee Information?"<<endl;
    cout<<"Enter Employee Name: ";
    cin>>emp.name;
    cout<<"Enter Employee City Name: ";
    cin>>emp.address.city;
    cout<<"Enter Employee Pin Number: ";
    cin>>emp.address.pin;
    cout<<"Enter Employee Phone: ";
    cin>>emp.address.phone;

    cout<<"\nPrinting Employee Information..."<<endl;
    cout<<"Name: "<<emp.name<<endl;
    cout<<"City Name: "<<emp.address.city<<endl;
    cout<<"Pin Number: "<<emp.address.pin<<endl;
    cout<<"Phone Number: "<<emp.address.phone<<endl;

    return 0;
}
