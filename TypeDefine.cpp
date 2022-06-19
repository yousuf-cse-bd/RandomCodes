#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    /* data */
    char name[20];
    int age;
};

typedef struct Student schoolStudent;

int main(int argc, char const *argv[])
{
    /* code */
    typedef int integer;
    integer num = 101;
    cout<<num + num<<endl;

    schoolStudent dhobra;
    strcpy(dhobra.name, "Yousuf");
    dhobra.age = 25;

    cout<<"Name: "<<dhobra.name<<endl;
    cout<<"Age: "<<dhobra.age<<endl;
    return 0;
}
