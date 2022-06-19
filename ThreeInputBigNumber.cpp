#include <iostream>
using namespace std;

int main(void)
{

    int num1,num2,num3;
    cout<<"Enter Three Value: \n";
    cin>>num1>>num2>>num3;

    if(num1>=num2)
    {
        if(num1>=num3)
        {
            cout<<"Num1: "<<num1<<endl;
        }
        else
        {
            cout<<"Num3: "<<num3<<endl;
        }

    }
    else
    {
        if(num2>=num3)
        {
            cout<<"Num2: "<<num2<<endl;
        }
        else
        {
            cout<<"Num3: "<<num3<<endl;
        }
    }


    return 0;
}
