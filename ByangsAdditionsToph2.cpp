#include <iostream>
using namespace std;
//Best practice follow it
int numberFromDigits(int n1, int n2)
{
    int carry = 0;
    int rem1;
    int rem2;
    while (n1 != 0 && n2 !=0)
    {
        rem1 = n1 % 10;
        rem2 = n2 % 10;
        if(rem1 + rem2 > 9)
        {
            carry = 1;
            break;
        }
        n1 /= 10;
        n2 /= 10;
    }

    return carry;
}
int main(int argc, char const *argv[])
{
    /* code */

    int num1, num2;
    cin>>num1>>num2;

    if(numberFromDigits(num1, num2)) // true statement
    {
		cout<<"Yes"<<endl;
	}
    else
	{
		cout<<"No"<<endl;
	}

    return 0;
}
