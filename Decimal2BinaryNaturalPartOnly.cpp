/**
 * @file Decimal2BinaryNaturalPartOnly.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WPA to convert decimal to binary
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system ("cls"); 
    int decimalNumber,i;    
     
    cout<<"Enter the Decimal Number: ";    
    cin>>decimalNumber; 
    // Binary array declaration
    // If you want to only print then declared char array
    // If you want to manipulation then declared int
    char binary[decimalNumber];
    // i variable only for array but condition controle the loop 
    for(i=0; 0 < decimalNumber;i++)    
    {    
        binary[i] = decimalNumber % 2;
        binary[i] += 48; // ASCII code to Number
        decimalNumber = decimalNumber / 2;    
    }    
    printf("\nBinary of Given Number is = ");    
    for(i=i-1 ; i>=0;i--)    
    {    
        cout<<binary[i];    
    }  

    return 0;
}
