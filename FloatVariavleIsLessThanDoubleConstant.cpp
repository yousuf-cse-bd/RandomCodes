#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    float a = 0.71;
    double b = 0.7;


    if(a < 0.71)
    {
        cout<<"True"<<endl;
        printf("%.8f\t%.8f", a, 0.71);
    }
    else
    cout<<"False"<<endl;
    return 0;
}
