#include <iostream>
using namespace std;

class SecondClass; //Forward Declaration is mandatory

class FirstClass
{
    int x;
public:
    FirstClass(int x)
    {
        this->x = x;
    }

    friend void areaOfRectangle(FirstClass, SecondClass); //Friend Function

};

class SecondClass
{
    int y;
public:
    SecondClass(int y)
    {
        this->y = y;
    }

    friend void areaOfRectangle(FirstClass, SecondClass); //Friend Function

};

void areaOfRectangle(FirstClass f1, SecondClass s1)
{
    cout<<"Area of Rectangle: "<<(f1.x * s1.y)<<" Meter Squar"<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    FirstClass f2 = FirstClass(5);
    SecondClass s2 = SecondClass(6);

    areaOfRectangle(f2, s2);
    return 0;
}
