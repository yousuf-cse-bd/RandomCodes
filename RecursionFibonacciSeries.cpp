#include <iostream>
using namespace std;

int fibonacciSeries(int i)
{
    if(i == 0 || i == 1)
    {
        return i;
    }
    else
    {
        return fibonacciSeries(i-1) + fibonacciSeries(i-2);
    }
}

int main(int argc, char const* argv[])
{
    for(int i = 0;i<=10;i++)
    {
        cout<<fibonacciSeries(i)<<" ";
    }
    cout<<endl;

    return 0;
}
