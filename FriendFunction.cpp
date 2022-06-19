/***
 * CHARACTERSTICS of a FRIEND FUNCTION
 * 1. The function is not in the SCOPE of the class to which it has been declared as friend
 * 2. It can not be called using the OBJECT as it is not scope the of that class
 * 3. It can be invoke like a normal function without using the OBJECT.
 * 4. It can not access the member names directly and has to use an OBJECT name and dot membership operator with the member name.
 * 5. It can be declared either in the PRIVATE and PUBLIC part.
 */

#include <iostream>
using namespace std;

class Box
{
    int length;
public:
    Box():length(10){} // as like initialized a value using constructor
    friend int printLength(Box); //Friend function argument the class
    friend void display(Box);// void type friend function
};

int printLength(Box b) //parameter class typed object attached
{
    b.length = b.length + 10;
    return b.length;
}

void display(Box bParameter)
{
    cout<<"This is also friend function."<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */

    Box bObject;
    cout<<"Length of Box: "<<printLength(bObject)<<endl;
    display(bObject);
    return 0;
}
