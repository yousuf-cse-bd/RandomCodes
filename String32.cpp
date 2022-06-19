#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    struct String32
    {
        /* data */
        long double n;
        string myString = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }string32;

    cout<<sizeof(string32.n)<<endl;
    cout<<sizeof(string)<<endl;
    cout<<sizeof(string32)<<endl;

    
    return 0;
}
