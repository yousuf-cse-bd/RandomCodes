#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int num, rem, counter = 0;
    cin>>num;
    string bin = "";
    int n = num;
    while (n!=0)
    {
        /* code */
        rem = num % 2;
        ++counter;
        bin = bin.append(to_string(rem));
        n = n / 2;
    }
    int sum = 0;
    cout<<bin[1]<<endl;
    cout<<endl;
    cout<<counter<<endl;
    return 0;
}
