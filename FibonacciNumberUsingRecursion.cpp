#include <iostream>
using namespace std;

unsigned int fibonacci(unsigned int n)
{
    if(n == 0)
    return 0;
    else if(n == 1)
    return 1;
    else
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<fibonacci(12)<<endl;

    return 0;
}
