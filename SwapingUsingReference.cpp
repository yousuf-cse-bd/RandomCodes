//Enter Changing or Swaping
#include <iostream>
using namespace std;

void swapingTwoVariable(int &a, int &b)
{
    //Swaping using bit-wise operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    //Swaping not using extra variable
    a = a + b;
    b = a - b;
    a = a - b;

    //Swaping using a temparable variable
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char const *argv[])
{
    /* code */

    int x = 15; //initialization of x = 15
    int y = 30; //initialization of y = 30
    cout<<"Before Swaping:\nX = "<<x<<"\t\tY = "<<y<<endl;
    swapingTwoVariable(x, y); //Calling Function
    cout<<"After Swaping:\nX = "<<x<<"\t\tY = "<<y<<endl;
    return 0;
}
