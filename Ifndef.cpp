#include <iostream>
using namespace std;

#define INPUT
// But, if you don't define INPUT, it will execute the code of #ifndef
int main(int argc, char const *argv[])
{
    /* code */
    int a = 0;
    #ifndef INPUT
    a = 2;
    #else
    cout<<"Enter a: ";
    cin>>a;
    #endif
    cout<<"Value of a: "<<a<<endl;
    return 0;
}
