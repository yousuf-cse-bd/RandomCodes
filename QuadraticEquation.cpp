#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c, x, d;

    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter c: ";
    cin>>c;

    d = (b*b) - 4*a*c;
    if(d == 0)
    {
        x = (-b)/2*a;
        cout<<"Only one real solution: "<<x<<endl;
    }
    else if(d>0)
    {
        float x1, x2;
        x1 = (-b + sqrt(d))/2*a;
        x2 = (-b - sqrt(d))/2*a;
        cout<<"\nFirst Root Value: "<<x1<<endl;
        cout<<"Second Root Value: "<<x2<<endl;
    }
    else
    {
        cout<<"There are no real solution..!"<<endl;
    }

    return 0;
}
