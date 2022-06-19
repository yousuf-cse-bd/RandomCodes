#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // size_t: typedef unsigned long long int
    typedef long long int lli;
    cout<<sizeof(lli)<<endl;
    cout<<sizeof(size_t)<<endl;
    cout<<sizeof(unsigned long long int)<<endl;
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        cout<<i<<" ";
    }

    return 0;
}
