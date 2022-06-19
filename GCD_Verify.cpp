#include <iostream>
using namespace std;

int gcd(int e, int z){
    if(e == 0)
    return z;
    else return gcd(z % e, e);
}

int main(int argc, char const *argv[])
{
    int e,z;
    z = 20;
    for(e = 2; e < 20; e++)
    {
        if(gcd(e,z) == 1)
        {
            break;
        }
    }

    cout<<"E = "<<e<<endl;

    // int num = 6 % 7;
    // cout<<num<<endl;
    return 0;
}
