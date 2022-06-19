//POINTS to REMEMBER for C++ ENUM
//1. Enum improve type safety
//2. Enum can be easily used in switch
//3. Enum can be traversed
//4. Enum can have fields, constrcutor and method
//5. Enum may implement many interfaces but can not extend any class because it internally 
//extends ENUM class

#include <iostream>
using namespace std;

//enum one kind of array, indexing to start zero, [0]
enum week{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main(int argc, char const *argv[])
{
    /* code */

    week day;
    day = Monday;

    cout<<"Day: "<<day + 5<<endl;
    return 0;
}
