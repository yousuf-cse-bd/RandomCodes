#include <iostream>
using namespace std;

void func();

#pragma sturtup func
#pragma exit func

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"I am in MAIN."<<endl;
    return 0;
}

void func()
{
    cout<<"I am in FUNCTION."<<endl;
}
