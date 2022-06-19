#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
    if(n == 1)
    return 1;
    else
    return n*(factorial(n - 1));

}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<factorial(5)<<endl;
    return 0;
}
