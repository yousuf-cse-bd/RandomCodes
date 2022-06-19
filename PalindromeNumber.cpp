#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char number[] = "1213";
    char palindromeNumber[strlen(number)];
    strcpy(palindromeNumber, number);
    
    if(strcmp(palindromeNumber, strrev(number)) == 0)
    cout<<"Palindrom Number"<<endl;
    else
    cout<<"!Palindrom Number"<<endl;

    // int num = atoi(number);
    // cout<<++num<<endl;

    return 0;
}
