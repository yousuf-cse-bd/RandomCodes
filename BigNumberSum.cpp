/**
 * @file BigNumberSum.cpp
 * @author your name (you@domain.com)
 * @brief [WRONG APPROACH]
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");

    long long int max1 = LONG_LONG_MAX;
    long long int max2 = max1;
    unsigned int sum[100];
    unsigned int carry = 0;
    unsigned int s = 0;
    unsigned int reSize = 0;
    unsigned int digitWise1, digitWise2;


    cout<<"Max1 = "<<max1<<"\nMax2 = "<<max2<<endl;
    while(max1 != 0 && max2 != 0){
        digitWise1 = max1 % 10;
        digitWise2 = max2 % 10;
        s = digitWise1 + digitWise2 + carry;
        if(s > 9){
            sum[reSize ++] = s % 10;
            carry = s / 10;
        }
        else{
            sum[reSize++] = (s + carry);
            carry = 0;
        }
        max1 /= 10;
        max2 /= 10; 
    }
    if(carry){
        sum[reSize++] = carry;
    }
    // Expected Result
    cout<<"Sum = ";
    for(unsigned int i = reSize - 1; i>=0; --i){
        cout<<sum[i];
    }
    cout<<endl;

    return 0;
}
