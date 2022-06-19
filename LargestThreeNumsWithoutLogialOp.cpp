#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2, num3;
    num1 = 1;
    num2 = 2; 
    num3 = 3;

    if(num1 > num2)
    {
        if(num1 > num3)
        cout<<"Num1 is Largest Value: "<<num1<<endl;
    }else
    {
        if(num2 > num3)
        cout<<"Num2 is Largest Value: "<<num2<<endl;
        else
        cout<<"Num3 is Largest Value: "<<num3<<endl;

    }

    return 0;
}