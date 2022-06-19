#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int p, a, i;
    p = 10;
    for (a = p, i = 1; i <= p; i++, a--)
    {
        cout<<"A = "<<a<<"\tI = "<<i<<endl;        
    }
    return 0;
}
