///using if-else with logical operator

#include <iostream>
using namespace std;

int main(void)
{
    int num1,num2, num3;
    num1 = 2;
    num2 = 3;
    num3 = 1;

    if(num1 > num2 && num1 > num3)
    {
        cout<<"Num1 is Largest Value = "<<num1<<endl;
    }
    else if(num1 < num2 && num2 > num3)
    {
        cout<<"Num2 is Largest Value: "<<num2<<endl;
    }
    else
    {
        cout<<"Num3 is Largest Value: "<<num3<<endl;
    }

    return 0;
}