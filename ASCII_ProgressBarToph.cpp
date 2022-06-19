#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    float input;
    cin>>input;
    int remainPercenatage, value, percentage = input;
    int progress = percentage;
    value = percentage % 10;
    if(value <= 9)
    {
        progress -= value;
        cout<<"[";
        for(int i = 10, j = 1; i<=progress; ++j, i += 10)
        {
            cout<<"+";
        }
        remainPercenatage = 100 - progress;
        for(int i = 10; i<= remainPercenatage; i+=10)
        {
            cout<<".";
        }
        cout<<"] "<<percentage<<"%"<<endl;
    }
    else
    {
        cout<<"[";
        for(int i = 10, j = 1; i<=progress; ++j, i += 10)
        {
            cout<<"+";
        }
        remainPercenatage = 100 - progress;
        for(int i = 10; i<= remainPercenatage; i+=10)
        {
            cout<<".";
        }
        cout<<"] "<<percentage<<"%"<<endl;
    }
    return 0;
}
