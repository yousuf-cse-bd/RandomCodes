#include <iostream>
using namespace std;

class B; //Forward declaration
class A //base class
{   
    int x;
public:
    void setData(int x)
    {
        this->x = x;
    }
    friend void min(A, B); //Friend Function

};

class B
{
    int y;
public:
    void setData(int y)
    {
        this->y = y;
    }
    friend void min(A, B); ///Friend Function
};

//Deffinition of Friend Function
void min(A aParameter, B bParameter)
{
    if(aParameter.x < bParameter.y)
    cout<<aParameter.x<<endl;
    else
    cout<<bParameter.y<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    A aObject;
    B bObject;

    aObject.setData(10);
    bObject.setData(20);

    min(aObject, bObject);
    return 0;
}
