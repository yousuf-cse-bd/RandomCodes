#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int num;
    for(int i = 0; i<=4; i ++)
    {
        num = 256 >> i;
        cout<<"Num = "<<num<<"\ti : "<<i<<endl;
    }

    return 0;
}
