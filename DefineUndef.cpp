#include <iostream>
using namespace std;

#define number 15
int square = number * number;
#undef number

int main(int argc, char const *argv[])
{
    /* code */
    cout<<square<<endl;
    // cout<<number<<endl; It provide compile time error

    return 0;
}
