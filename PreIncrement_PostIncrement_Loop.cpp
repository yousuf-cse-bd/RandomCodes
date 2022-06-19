#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    size_t i,j; /// ==int
    for(i = 0;i!=10;i++);
    cout<<"I = "<<i<<endl;

    for(j = 0;j<10;++j);
    cout<<"J = "<<j<<endl;

    return 0;
}
