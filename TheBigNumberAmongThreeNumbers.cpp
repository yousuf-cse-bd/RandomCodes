#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int num1 = 5, num2 = 10, num3 = 15;

    int bigNumber;
    bigNumber = (num1 > num2) ? num1 : (num2 > num3) ? num2 : num3;
    cout<<bigNumber<<endl;
    return 0;
}
