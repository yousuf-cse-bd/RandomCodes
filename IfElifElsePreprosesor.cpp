#include <iostream>
using namespace std;
#define age 25
int main(int argc, char const *argv[])
{
    /* code */
    #if age < 10
    cout<<"Baby"<<endl;
    #elif  age <18
    cout<<"Young"<<endl;
    #else
    cout<<"18+"<<endl;
    #endif
    return 0;
}
