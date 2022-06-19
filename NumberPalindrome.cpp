#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char myNumber[] = "1001";
    int num = atoi(myNumber);
    // cout<<num<<endl;

    int palindomeNumber = 0, forCheck =  num;

    while (num != 0)
    {
        int digit = num % 10;
        palindomeNumber = palindomeNumber *  10 + digit;
        // cout<<palindomeNumber<<" ";
        num /= 10;
    }

    palindomeNumber == forCheck ? cout<<palindomeNumber<<" is Palindrome Number.\n":
    cout<<"Not Palindrome Number"<<endl;
    
    return 0;
}

