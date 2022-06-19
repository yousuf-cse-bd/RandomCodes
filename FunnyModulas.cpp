#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int number, mode, i;
    number = 1000;
    mode = 0;
    for (i = 1; i <= number; i++)
    {
        mode = number % i;
        if (mode < 900)
        {
            cout << "Mod: " << mode << " When = " << i << endl;
            mode = 0;
        }
        /*else
        {
            cout << "Mod: " << mode << " When = " << i << endl;
            mode = 0;
        }*/
    }

    return 0;
}
