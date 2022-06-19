#include <iostream>
using namespace std;

int main()
{
    int seven = 7 << 2;
    cout<<seven<<endl;
    int num = 1;
    num = num << 5; //Left shift : value increase
    cout<<"Left Shift Number: "<<num<<endl;
    num = num >> 5;//Right shift: value decrease
    cout<<"Right Shift Number: "<<num<<endl;

    return 0;
}
