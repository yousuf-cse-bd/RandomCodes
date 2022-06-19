#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char num[1000];
    cin>>num;
    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;

    for(int i = 0; i<strlen(num); i++)
    {
        if('0' == num[i])
        ++zero;
        if('1' == num[i])
        ++ one;
        if('2' == num[i])
        ++two;
        if('3' == num[i])
        ++three;
        if('4' == num[i])
        ++four;
        if('5' == num[i])
        ++five;
        if('6' == num[i])
        ++ six;
        if('7' == num[i])
        ++seven;
        if('8' == num[i])
        ++eight;
        if('9' == num[i])
        ++nine;
    }

    cout<<zero<<' '<<one<<' '<<two<<' '<<three<<' '<<four<<' ';
    cout<<five<<' '<<six<<' '<<seven<<' '<<eight<<' '<<nine<<' ';
    return 0;
}
