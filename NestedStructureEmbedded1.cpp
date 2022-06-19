#include <iostream>
#include <cstring>
using namespace std;

// Nested Structure: By Embedded

struct Employee
{
    /* data */
    int id;
    char name[20];
    struct Date
    {
        /* data */
        int dd;
        int mm;
        int yyyy;
    };
    Date doj;
}emp;


int main(int argc, char const *argv[])
{
    /* code */
    // Storing employee information
    emp.id = 101;
    strcpy(emp.name, "Yousuf Ali"); // copying string into char array
    emp.doj.dd = 27;
    emp.doj.mm = 05;
    emp.doj.yyyy = 2022;

    cout<<"Printing first employee information:"<<endl;
    cout<<"ID: "<<emp.id<<endl;
    cout<<"Name: "<<emp.name<<endl;
    cout<<"Joining Date(dd/mm/yyyy): "<<emp.doj.dd<<"/"<<emp.doj.mm<<"/"<<emp.doj.yyyy<<endl;
    return 0;
}
