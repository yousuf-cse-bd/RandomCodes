#include <iostream>
using namespace std;

struct Student
{
   int age;
   string firstname, lastName;
   int standard;
};


int main(int argc, char const *argv[])
{
    /* code */

    Student stObject;
    cin>>stObject.age>>stObject.firstname>>stObject.lastName>>stObject.standard;

    cout<<stObject.age<<" "<<stObject.firstname<<" "<<stObject.lastName<<" ";
    cout<<stObject.standard<<endl;
    return 0;
}
