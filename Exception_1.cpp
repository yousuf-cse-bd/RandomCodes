#include <iostream>
using namespace std;

int dividedNumbers(int num1, int num2)
{
    if(num2 == 0)
    throw 1;
    return num1 / num2;

}

int main()
{
    int a,b;
    cout<<"Enter First Value Here: ";
    cin>>a;
    cout<<"Enter Next Value Here: ";
    cin>>b;

    try
    {
        cout<<dividedNumbers(a,b)<<endl;
    }
    catch(int & exception)
    {
        cout<<"ERROR CODE..!"<<endl;
    }
    
    cout<<"Normal Data Flow."<<endl;

    return 0;
}