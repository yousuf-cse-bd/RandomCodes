#include <iostream>
using namespace std;

int main()
{
    double area, base, height;
    cout<<"Enter Base :";
    cin>>base;
    cout<<"Enter Hight: ";
    cin>>height;

    area = 0.5 * base* height;

    cout<<"Area of Triangle: "<<area<<" Square unit"<<endl;

    return 0;
}
