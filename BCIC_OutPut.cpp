#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    bool a = true, b = false;
    for(int x = 3, y = 8; x<=5; y<=10, ++x, ++y)
    {
        int kc = (x | y) + (a+b);
        cout<<kc<<endl;
        a = b;
        b = true - a;
    }

    return 0;
}
