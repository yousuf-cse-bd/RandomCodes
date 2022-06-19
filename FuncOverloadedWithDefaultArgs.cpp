#include <iostream>
using namespace std;

void func(int);
void func(int , int);

void func(int i = 10)
{
    cout<<"Value of I: "<<i<<endl;
}

void func(int a, int b = 9) //default argument
{
    cout<<"Value of A: "<<a<<endl;
    cout<<"Valu of B: "<<b<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    func(12);
    func(4, 5);
    return 0;
}
