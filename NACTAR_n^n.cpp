#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    long long int sum = 0;
    int n, i;
    cout<<"Enter Nth value here: ";
    cin>>n;
    for(i = 1; i<=n; i++)
    {
        sum = sum + pow(i, n);
    }
    cout<<"Summation of seriese is = "<<sum<<endl;

    return 0;
}
