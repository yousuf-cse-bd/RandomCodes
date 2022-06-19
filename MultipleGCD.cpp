#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int gcd = __gcd(__gcd(15, 27),__gcd(24,21));
    cout<<gcd<<endl;

    return 0;
}
