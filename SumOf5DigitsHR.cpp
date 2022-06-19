#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int num = 10564;
    int sum, rem;
    sum = 0;
    while (num !=0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    
    cout<<sum<<endl;
    return 0;
}
