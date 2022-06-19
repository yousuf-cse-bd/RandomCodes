#include <iostream>
using namespace std;

int negativeValueSumRecursion(int n)
{
    if(n == 0)
    return 0;
    else
    return n+negativeValueSumRecursion(n + 1);
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Sum of negative number: "<<negativeValueSumRecursion(-5)<<endl; 
    return 0;
}
