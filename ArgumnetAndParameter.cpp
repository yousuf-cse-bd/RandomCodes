/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Sunday, 12 July 2020
 * ***Arguments And Parameters within Class**** 
 */

#include <iostream>
using namespace std;
class ArgmentalMatthers
{
    public:
    void addNumbers(int,int);
    
};

void ArgmentalMatthers :: addNumbers(int num1,int num2)
{
   cout<<num1 + num2<<endl; 
}

int main(void)
{
    ArgmentalMatthers ob = ArgmentalMatthers();

    ob.addNumbers(5,15);
    return 0;
}