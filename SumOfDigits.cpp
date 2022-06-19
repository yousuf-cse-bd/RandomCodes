#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int num = 1234;

    int rem, div, sum = 0;
    while (num!=0)
    {
        rem = num % 10;
        // cout<<rem*10<<" ";
        sum += rem;
        num = num / 10;
    }
    
    cout<<"\nSum of Digits: "<<sum<<endl;

    return 0;
}
