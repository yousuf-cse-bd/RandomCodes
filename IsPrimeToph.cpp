#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(unsigned n)
{
    int flag = true;
    for(int i = 2; i<sqrt(n); i++)
    {
        if(n % i == 0)
        flag = false;
    }

    if(flag == true)
    return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    /* code */

    unsigned n;
    cin>>n;

    if(isPrime(n))
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    

    return 0;
}
