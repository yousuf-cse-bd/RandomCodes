///Author: Muhammad Yousuf Ali
///Since: Wednesday, 20 November 2019
/****
    Left Shifting
    5 << 1
    here 1 means 5^2
*/

#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int num;
    num = 5;
    num = num << 0; ///Equality to 5^2 and !0
    cout<<"Number : "<<num<<endl;
    return 0;
}
