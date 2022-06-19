#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *ptr;
    int num = 10;
    ptr = &num;

    cout<<*ptr<<endl;

    return 0;
}
