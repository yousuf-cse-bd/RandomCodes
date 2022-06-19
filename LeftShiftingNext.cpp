#include <iostream>
using namespace std;

int main(void)
{
    long int a = 1;
    for(int i = 0;i<=8;i++)
    {
        a = a << i;
        cout<<"A = "<<a<<"\ti : "<<i<<endl;
        a = 1;
    }

    return 0;
}
