#include <iostream>
using namespace std;
#pragma pack(1)
struct Employee
{
    int id;
    char name[5];
    float salary;
}e;

int main(int argc, char const *argv[])
{
    /* code */
    struct Employee emp[2];
    cout<<sizeof(emp[2])<<endl;
    cout<<sizeof(e)<<endl;
    return 0;
}
