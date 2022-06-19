#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned count  = 0;
    bool prime = true;
    for(unsigned int p = 2; p<=100; p++)
    {
        for(int i = 2; i*i <= p; i++)
        {
            if(p % i == 0)
            prime = false;
        }
        if(prime) //by deafult true
        {
            cout<<p<<" is a prime number $$$"<<++count<<endl;
        }
        // else
        // cout<<p<<" is not prime number!!!"<<endl;

        prime = true;
    }
    
    return 0;
}
