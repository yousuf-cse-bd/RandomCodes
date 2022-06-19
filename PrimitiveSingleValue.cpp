#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int p = 19;
    int a = 3;
    long long int q;
    for (int i = 1; i < p; i++)
    {
        q = (long long int)pow(a, i) % p;
        if (q == 1)
        {
            cout << q << " ";
            break;
        }
        else
        {
            cout << q << " ";
        }
    }

    cout << endl;
    return 0;
}
