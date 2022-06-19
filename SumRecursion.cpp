#include <iostream>
using namespace std;

unsigned int recursion(unsigned int n)
{
    if(n == 1)
    return 1;
    else
    return n+recursion(n - 1 );
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Sum of: "<<recursion(5)<<endl;
    return 0;
}
