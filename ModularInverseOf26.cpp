/****
 * Modular Inverse of 26
 * @Author: MuhammadYousufAli
 * @Since: 1st February 2021 
 */

#include <iostream>
using namespace std;

void modularInverse26()
{
    int i, j, mult;
    int inverseKey;
    do{
    cout << "Enter an Odd Number Here A: ";
    cin >> inverseKey;
        if (inverseKey == 1)
        {
            cout << 1 << " Inverse of " << inverseKey << endl;
        }
        else if (inverseKey == 13)
        {
            cout<<"13 Has no Inverse Value."<<endl;
        }
        else if (inverseKey % 2 != 0)
        {
            for (i = 1; i <= 25; i++)
            {
                mult = (26 * i) + 1;
                // cout << "26 x " << i << " + 1 = " << mult << endl;
                if (mult % inverseKey == 0)
                {
                    for (j = 1; j <= 26; j++)
                    {
                        if (mult % j == 0 && (j * inverseKey) == mult)
                            cout << j << " Inverse of " << inverseKey << endl;
            
                    }
                    break;
                }
            }
        }
        else
        {
            cout << "Only Support Odd Value." << endl;
            break;
        }
    }while(true);
}

int main(int argc, char const *argv[])
{
   modularInverse26();

   
    return 0;
}
