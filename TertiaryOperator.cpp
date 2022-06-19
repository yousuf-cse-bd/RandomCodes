#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    (10 % 2 == 0)?cout<<"Even\n":cout<<"Odd"<<endl;

    int num = 10;
    num = (num % 2 == 0)? num + 1: num + 2;
    cout<<"Num: "<<num<<endl;
    return 0;
}
