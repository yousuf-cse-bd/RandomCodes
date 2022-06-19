#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    // char values swap
    char c1 = 'A', c2 = 'B';
    swap(c1, c2);
    cout<<"C1 = "<<c1<<"\t\tC2 = "<<c2<<endl;
    // sign int value swap
    int num1 = -5, num2 = -10;
    swap(num1, num2);
    cout<<"\nNum1 = "<<num1<<"\t\tNum2 = "<<num2<<endl;
    // unsigned int value swap
    unsigned int un1 = 5, un2 = 10;
    swap(un1, un2);
    cout<<"Un1 = "<<un1<<"\t\tUn2 = "<<un2<<endl;
    // floating points swap;
    float f1 = 3.1415, f2 = 2.718;
    swap(f1, f2);
    cout<<"F1 = "<<f1<<"\t\tF2 = "<<f2<<endl;
    // double value swap
    double d1 = 5.5, d2 = 10.9;
    swap(d1, d2);
    cout<<"D1 = "<<d1<<"\t\tD2 = "<<d2<<endl;

    
    return 0;
}
