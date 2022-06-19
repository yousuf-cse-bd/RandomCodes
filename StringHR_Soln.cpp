#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    string str1, str2, str3;

    char a,b;
    int strlen1, strlen2;

    //string one
    cin>>str1;
    // string two
    cin>>str2;
    // first string length
    strlen1 = str1.length();
    //second string length
    strlen2 = str2.length();
    cout<<strlen1<<" "<<strlen2<<endl;

    //concatinate two strings
    str3 = str1 + str2;
    cout<<str3<<endl;
    //a' b'
    a = str2[0];
    b = str1[0];
    str1[0] = a;
    str2[0] = b;
    cout<<str1<<" "<<str2<<endl;

    return 0;
}
