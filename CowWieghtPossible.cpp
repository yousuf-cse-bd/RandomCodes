#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    double weight, lenght, diameter;
    cout<<"Enter lenth the cow: ";
    cin>>lenght;
    cout<<"Enter diameter the cow: ";
    cin>>diameter;

    weight = (lenght  * diameter * diameter) / 660;
    cout<<"Possible Weight the Cow: "<<weight<<" KG"<<endl;

    return 0;
}
