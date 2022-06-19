#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

   int n; //Variable declaration
    cout<<"Enter the number o bits do you want to enter: ";
    cin>>n;

    char binary[n+1]; // Binary array declaration
    char onesComplement[n+1]; //onesCompelement array declaration
    char twosComplement[n+1]; // TwosComplement declaration

    int carry = 1;
    cout<<"Enter the binary number: ";
    cin>>binary;
    cout<<"\nEntered the binary number: "<<binary<<endl;
    cout<<"The Ones Complement Numb: ";
    //Finding ones complement number
    for(int i = 0; i<n; i++)
    {
        if(binary[i] == '0')
            onesComplement[i] = '1';
       else if ( binary[i] == '1')
            onesComplement[i] = '0';
    }
    onesComplement[n] = '\0';

    cout<<onesComplement<<endl; //printing One's complement

    cout<<"The Twos Complement Numb: ";
    for(int i = n - 1; i>=0; i--)
    {
        if(onesComplement[i] == '1' && carry == 1)
        {
            twosComplement[i] = '0';
            // cout<<"@twosComplement["<<i<<"] = "<<twosComplement[i];
        }
        else if(onesComplement[i] == '0' && carry == 1)
        {
            twosComplement[i] = '1';
            // cout<<"#twosComplement["<<i<<"] = "<<twosComplement[i];
            carry = 0;
        }
        else
        {
            twosComplement[i] = onesComplement[i];
        }
    }
    twosComplement[n] = '\0';
    cout<<endl;
    cout<<twosComplement<<endl;
    return 0;
}
