/**
 * @file GCD_ICT.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find GCD concept from ICT book
 * @version 0.1
 * @date 2022-07-22
 * @since Friday, 7:20 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

unsigned int ucleanMethodGCD(unsigned int n1, unsigned int n2){
    while(n2 != 0){
        unsigned int remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }
    return n1;
}

unsigned int GCD_ICT(unsigned int n1, unsigned int n2){
    unsigned int gcd;
    gcd = (n1 > n2) ? n2 : n1;
   static int count;
    while (true)
    {
        /* code */
        if(n1 % gcd == 0 && n2 % gcd == 0){
            return gcd;
        }
        -- gcd;
    }
}

int main(int argc, char const *argv[])
{
    /* code */

    cout<<GCD_ICT(6, 23)<<endl;
    cout<<ucleanMethodGCD(23, 6)<<endl;
    return 0;
}
