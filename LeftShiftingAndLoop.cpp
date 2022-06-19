#include <iostream>
using namespace std;

int main(void)
{
    for(int i = 1;i<=256;i = i * 2)
    {
        cout<<i<<endl;
    }

    cout<<endl;

    for(int i = 0;i<=8;i++)
    {
        int num = 1;
        num = num << i;
        cout<<num<<endl;
    }

    return 0;
}
