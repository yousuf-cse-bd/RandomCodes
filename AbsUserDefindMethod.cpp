#include <iostream>
using namespace std;

unsigned int absFunc(int n)
{
    if(n > 0)
    return n;
    else
    return n*-1;
}

int main(int argc, char const *argv[])
{
    int A['a'] = {0};

    cout<<sizeof(A) / sizeof(int)<<endl;

    /* code */
    // int n;
    // cin>>n;
    // cout<<n<<endl;
    cout<<absFunc(-22)<<endl;
    return 0;
}
