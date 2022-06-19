#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    long long llMin = LONG_LONG_MIN;
    long long llMax = LONG_LONG_MAX;
    cout<<"Long Long Min = "<<llMin<<"\nLong Long Max  = "<<llMax<<endl;

    int sumOfDigit[20];
    int i, carry, reSize, sum;
    carry = reSize = sum = 0;
    int digit1, digit2;
    while (llMin != 0 && llMax != 0)
    {
        //first number digits
       digit1 = llMin % 10;
       digit1 = digit1 * (-1);
       
       //seconf number digits
       digit2 = llMax % 10;
       //operations
       sum = digit1 + digit2;
       if(sum > 9)
       {
        //    cout<<sum<<" ";
           sumOfDigit[reSize++] = (sum + carry) % 10;
           carry = sum / 10;
        //    cout<<"Carry = "<<carry<<endl;
       }
       else
       {
           sumOfDigit[reSize++] = sum + carry;
           carry = 0;
       }
    
       llMin /= 10; //first part's
       llMax /= 10; //second part's
       sum = 0;
    }
    if(carry)
    sumOfDigit[reSize++] = carry;
    // cout<<"Resize = "<<reSize<<endl;
    // int count = 0;

    cout<<"\nYour Resutl Is= ";
    for(i = reSize - 1; i>= 0; i--)
    {
        cout<<sumOfDigit[i];
        // count ++;
    }
    // cout<<"\ncount = "<<count<<endl;
    
    return 0;
}
