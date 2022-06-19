#include <iostream>
using namespace std;

void twoReturnValuesWithoutXtraVariable(int & sum,  int & sub)
{
    sum = sum + sub;
    sub = sum - sub - sub;
}
void twoReturnValues(int x, int y, int & sum, int & sub)
{
   sum = x + y;
   sub = x - y;
}

int sumAndSub(int x, int y, int & sum, int & sub)
{
    if(&sum == NULL || &sub == NULL)
    return 0; // No need to curly brace for single statement

    sum = x + y;
    sub = x - y;
    return 1;
}

int main(int argc, char const *argv[])
{
    /* code */
    int x = 25, y = 10;
    int sum;
    int sub;
    twoReturnValues(x, y, sum , sub);
    cout<<"Sum : "<<sum<<"\tSub: "<<sub<<endl;

    int summation = 50, subtraction = 40;
    twoReturnValuesWithoutXtraVariable(summation , subtraction);
    cout<<"Summetion = "<<summation<<"\tSubtraction = "<<subtraction<<endl;

    x = 50;
    y = 20;
    int add, minus;
    bool status = sumAndSub(x, y, add, minus);
    if(status)
    cout<<"Add: "<<add<<"\tMinus: "<<minus<<endl;
    else
    cout<<"Something went wrong..!"<<endl;
    return 0;
}
