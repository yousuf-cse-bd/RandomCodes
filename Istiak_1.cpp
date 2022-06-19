#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{

    unsigned num1, rem, div, divider;

    cout << "Enter Your Max Metre Here: ";
    cin >> num1;

    cout << "Min Length Here: ";
    cin >> divider;

    rem = 0;
    // num1 = 10000;

    div = num1 / divider;

    rem = num1 % divider;

    if (rem > 0)
    {
        div++;
    }
    else
    {
        div = div;
    }
    cout << "Your Answer: " << div << "th" << endl;

    return 0;
}
