#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int *ptr;
    int marks[10];
    for (int i = 0; i < 10; i++)
    {
        marks[i] = i + 1;
    }

    cout << "All Marks Below:" << endl;
    for (int m : marks)
    {
        cout << m << " ";
    }

    // Assignment operator does not support ASTERIK_SIGN [Array]
    ptr = marks;
    cout << "\nThe Value of *ptr: " << *ptr<< endl;
    cout << "The Value of *marks: " << *marks << endl;
    cout << "The Value of marks[0]: " << marks[0] << endl;

    return 0;
}
