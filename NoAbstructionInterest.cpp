#include <iostream>
using namespace std;
//It is predictable balanace
int main(int argc, char const *argv[])
{
    /* code */

    long sum = 0;
    int amounts;

    for (short i = 1; i <= 12; i++)
    {
        short style = 5;
        printf("%c",style);
        printf("%c",style);
        printf("%c",style);
        printf("%c",style);
        cout<<"\tAccount for Yearly\t";
        style = 4;
        printf("%c",style);
        printf("%c",style);
        printf("%c",style);
        printf("%c\n",style);
        char giveMoney;
        cout << "Do You Want to Pay Your Part of Money (n/Y)? ";
        cin >> giveMoney;

        if (giveMoney == 'n' || giveMoney == 'N' || giveMoney == '0')
        {
            cout << "Ok, Fine No Problem..." << endl;
            break;
        }
        else if (giveMoney == 'y' || giveMoney == 'Y')
        {
            short monthNumber = 0;
            cout << "\nOk, Then Give Your Money Now: ";
            cin >> amounts;
            sum += amounts;
            cout << "\nYour Paid Amount: " << sum << " TK Yet\n";
            
            cout<<"Month Number: "<<++monthNumber<<endl;
        }
        else
        {
            cout << "You'Ve Enter n/Y...!";
        }
    }

    return 0;
}
