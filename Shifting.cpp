#include <iostream>
using namespace std;

int main(void)
{

    int number,lShift,rShift,times;
    cout<<"Enter a Value Here: ";
    cin>>number;
    cout<<"Times Value Here (+v): ";
    cin>>times;

    lShift = number << times; ///Left Shifting | number*times^times
    rShift = number >> times; ///Right Shifting | number/times^times

    cout<<number<<" = Left Shifting << "<<lShift<<" "<<times<<",Times"<<endl;
    cout<<number<<" = Right Shifting >> "<<rShift<<" "<<times<<",Times"<<endl;


    return 0;
}
