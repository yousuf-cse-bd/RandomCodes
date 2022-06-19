//Ambiquity Resolution in Inheriatane
// Ambiquity can be occured in using the multiple ineritance when a function with the 
// same name occurs in more than BASE_CLASS

#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout<<"Class A"<<endl;
    }
};

class B
{
public:
    void display()
    {
        cout<<"Class B"<<endl;
    }
};

class C : public A, public B
{
public:
    void view()
    {
        A :: display(); //Calling the display() function of class A
        B :: display(); //Calling the display() function of class B
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    C c;
    c.view();
    
    return 0;
}
