#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

ineligible: // goto label
    cout << "You are not eligible to vote!" << endl;

    cout << "Enter your age here: ";
    int age;
    cin >> age;

    if (age < 18)
        goto ineligible;
    else
        cout << "You are eligible to vote." << endl; //un declared break

    return 0;
}
