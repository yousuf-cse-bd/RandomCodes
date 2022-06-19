#include <iostream>
using namespace std;

int main(int argc , char const* argv[])
{
    int number ,i,sum = 0;
    cout<<"Enter A Positive Number Here: ";
    cin>>number;

    for(i = 1;i<number;i++)
    {
        if(number % i == 0)
        {
            sum += i;
        }
    }

    if(sum == number)
    {
        cout<<"Perfect Number"<<endl;
    }
    else
    {
        cout<<"Not Perfect Number"<<endl;
    }

    return 0;
}
