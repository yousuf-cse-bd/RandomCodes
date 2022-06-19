#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j;
    for(i = 0, j = 0; j<=10; i++, j++)
    {
        (i == j)?cout<<"True\n":cout<<"False\n";
    }
    return 0;
}
