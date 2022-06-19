/**
 * @file DigitFrequencyHRUsingSwitchCase.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char num[1000];
    cin>>num;
    unsigned int zero = 0, one = 0,two = 0, three = 0, four = 0, five = 0, 
    six = 0,seven = 0, eight = 0, nine = 0;

    for(int i = 0; num[i] != '\0'; i++)
    {
        switch (num[i])
        {
        case '0':
            ++zero;
            break;
        case '1':
            ++one;
            break;
        case '2':
            ++two;
            break;
        case '3':
            ++three;
            break;
        case '4':
            ++four;
            break;
        case '5':
            ++five;
            break;
        case '6':
            ++six;
            break;
        case '7':
            ++seven;
            break;
        case '8':
            ++eight;
            break;
        case '9':
            ++nine;
            break;
        default:
            break;
        }
    }

    cout<<zero<<' '<<one<<' '<<two<<' '<<three<<' '<<four<<' ';
    cout<<five<<' '<<six<<' '<<seven<<' '<<eight<<' '<<nine<<' ';
    return 0;
}
