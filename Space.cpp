/****
 * @Author: Muhammad Yousuf Ali
 * @Since: 19 March 2020
 */

///Agree Gate Function

#include <iostream>
using namespace std;

string space(unsigned int n)
{
    string str1 = " ";
    string strSum;
    for(unsigned int i = 1;i<=n;i++)
    {
       strSum = strSum + str1;
    }
    return strSum;
}

string newLn(void)
{
    return "\n";
}

int main(void)
{
    newLn();
    string firstName = "Muhammad";
    string midName = "Yousuf";
    string lastName = "Ali";

    cout<<"Full Name: "<<firstName<<space(1)<<midName<<space(1)<<lastName<<newLn();


    return 0;
}