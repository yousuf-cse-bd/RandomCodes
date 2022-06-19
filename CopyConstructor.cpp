#include <iostream>
using namespace std;

class A
{
public:
    int x;
    A(int a) //Parameterized constrcutor
    {
        x = a;
    }
    A(A &i)//copy constructor
    {
        x = i.x;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    A a1(20);
    A a2(a1); // equal to a2 = a1;
    // A a2 = a1;

    cout<<a2.x<<endl;

    return 0;
}

//WHEN COPY CONSTRUCTOR is CALLED
//1. When we initialize the object with another existing object of the same class type. 
//for example, Student s1 = s2, where Student is the class.
//2. When the object of the same class type is passed by value as an argument
//3. When the function return the object of the same class type by value
