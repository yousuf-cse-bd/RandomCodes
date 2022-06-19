///Pointer Call by Refference
#include <iostream>
#include <cmath>
using namespace std;

void callByRefference1(int *a, int *b)
{
    *a = *a + *b;
}

void callByRefference2(int *a, int *b)
{
    *a = *a - *b;
}


int main(int argc, char const *argv[])
{
    /* code */

    int num1, num2;
    cin>>num1>>num2;

    int x, y;
    x = num1;
    y = num2;
    callByRefference1(&num1, &num2);
    cout<<num1<<endl;

    callByRefference2(&x, &y);
    cout<<abs(x)<<endl;

    return 0;
}
