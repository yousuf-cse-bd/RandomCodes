/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Tuesday, 21 April 2020
 * Fucntion and Loop
 */

#include <iostream>
void myFn1(void);
void myFn2(void);
using namespace std;

int main(void)
{
    int i = 1;
    while (i <= 10)
    {
        myFn1();
        myFn2();
        i++;
    }
    

    return 0;
}

void myFn1(void)
{
    cout<<"Yousuf"<<endl;
}
void myFn2(void)
{
    cout<<"Ali"<<endl;
}