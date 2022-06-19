#include <iostream>
using namespace std;

void fun(int i)
{
    cout<<"Value of I: "<<i<<endl;
}

void fun(float j)
{
    cout<<"Value of J: "<<j<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    fun(12);
    float b = (float)1.2; //Need to typecasting otherwise ambiguous error
    fun(b);
    return 0;
}
