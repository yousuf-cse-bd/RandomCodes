#include <iostream>
#include <cstring>
using namespace std;

struct MyStructure
{
    /* data */
    int integer;
    float decimal;
    char name[20];
};

union MyUnion
{
    /* data */
    int integer;
    float decimal;
    char name[20];
};



int main(int argc, char const *argv[])
{
    /* code */
    MyStructure myStructure = {5, 15.5, "Yousuf"};
    printf("Data of Structure: \n Integer: %d\n Decimal: %0.2f\n Name:%s\n", myStructure.integer, myStructure.decimal, myStructure.name);

    MyUnion myUnion;
    myUnion.integer = 13;
    myUnion.decimal = 10.8;
    strcpy(myStructure.name, "Ali");
    printf("Data of Union: \n Integer: %d\n Decimal: %0.2f\n Name:%s\n", myUnion.integer, myUnion.decimal, myUnion.name);
    // cout<<"Data of Uninon Integer: "<<myUnion.integer<<endl;
    // cout<<"Decmimal: "<<myUnion.decimal<<endl;
    // cout<<"Name: "<<myUnion.name<<endl;
    return 0;
}
