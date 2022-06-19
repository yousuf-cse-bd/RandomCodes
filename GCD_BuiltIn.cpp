#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"GCD: "<<__gcd(30, 12)<<endl;
    cout<<"LCM: "<<(30 * 12) / __gcd(30, 12)<<endl;


    return 0;
}
