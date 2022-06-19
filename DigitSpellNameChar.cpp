/**
 * @file DigitSpellName.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief  Digit spelling name using string
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

string counterDigits(unsigned count)
{
    switch (count)
    {
    case 0:
        return "";
        break;
    case 1:
        return "Single";
        break;
    case 2:
        return "Double";
        break;
    case 3:
        return "Triple";
        break;
    default:
        return to_string(count);
        break;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int number = 17131001;
    cout<<"The Number: "<<number<<endl;
    string numberStr = to_string(number);
    reverse(numberStr.begin(), numberStr.end());
    number = stoi(numberStr);

    int count0, count1, count2, count3, count4, count5, count6, count7, count8, count9;
    count0 = count1 = count2 = count3 = count4 = count5 = count6 = count7 =  count8 = count9 = 0;
    while(number != 0)
    {
        int digitWise = number % 10;
        switch (digitWise)
        {
        case 0:
            ++count0;
            break;
        case 1:
            count1++;
            break;
        case 2:
            count2++;
            break;
        case 3:
            count3++;
            break;
        case 4:
            count4++;
            break;
        case 5:
            count5++;
            break;
        case 6:
            count6++;
            break;
        case 7:
            ++count7;
            break;
        case 8:
            ++count8;
            break;
        case 9:
            ++count9;
            break;
        default:
            cout << "Tut Tut..!" << endl;
            break;
        }
        number /= 10;
    }
    if(counterDigits(count0) != "")
    cout<<counterDigits(count0)<<"Zero ";
    if(counterDigits(count1) != "")
    cout<<counterDigits(count1)<<"One ";
    if(counterDigits(count2) != "")
    cout<<counterDigits(count2)<<"Two ";
    if(counterDigits(count3) != "")
    cout<<counterDigits(count3)<<"Three ";
    if(counterDigits(count4) != "")
    cout<<counterDigits(count4)<<"Four ";
    if(counterDigits(count5) != "")
    cout<<counterDigits(count5)<<"Five ";
    if(counterDigits(count6) != "")
    cout<<counterDigits(count6)<<"Six ";
    if(counterDigits(count7) != "")
    cout<<counterDigits(count7)<<"Seven ";
    if(counterDigits(count8) != "")
    cout<<counterDigits(count8)<<"Eight ";
    if(counterDigits(count9) != "")
    cout<<counterDigits(count9)<<"Nine ";
    else
    cout<<"."<<endl;
    
    return 0;
}
