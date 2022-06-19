#include <iostream>
using namespace std;

unsigned int sumOfNthNumber(unsigned n)
{
    if(n == 0)
    return 0;
    else
    {
        cout<<n<<" ";
        return n + sumOfNthNumber(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<sumOfNthNumber(10)<<endl;
    return 0;
}
