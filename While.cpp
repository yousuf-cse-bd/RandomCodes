#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int res[10];
    int carry = 2; //carry is less than 9 then loop work just one times
    int resize = 0;
    while (carry)
    {
        /* code */
        res[resize] = carry % 10;
        carry = carry / 10;
        cout<<++resize<<endl;

    }
    

    return 0;
}
