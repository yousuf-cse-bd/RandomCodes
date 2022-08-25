/**
 * @file DecimalRealNumberToFractionValue.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Convert given Decimal number into an irreducible Fraction using GCD concept
 * @version 0.1
 * @date 2022-08-25
 * @since ThursDay; 08: 42 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
/*Find Greatest Common Divisor GCD*/
long long int gcd(long long int number1, long long int number2){
    long long int number3;
    while(number2 != 0){
        number3 = number1 % number2;
        number1 = number2;
        number2 = number3;
    }
    return number1;
}

/*Converting decimal value to fractional format*/
void decimalToFractionalShape(long double decimalNumber){
    /*If Decimal number is positive*/
    if(decimalNumber > 0.0){
        /*Consider integer part*/
        double intPart = floorl(decimalNumber);
        /*Consider real part*/
        double realPart = fmodl(decimalNumber, intPart);
        
        /*Consider precision value to convert fractional part to integral equivalent*/
        const long long int precisionValue = 1000000000; // 10^9
        /*Calculate GCD of integral equiavalent of fractional part and precision value*/
        long long int gcdValue = gcd(roundl(realPart * precisionValue), precisionValue);
        /*Calculate numerator, denominator*/
        long long int numerator = (roundl(realPart * precisionValue)) / gcdValue;
        long long int denominator = precisionValue / gcdValue;
        numerator = ((intPart * denominator) + numerator);
        /*Print given number*/
        cout<<"Given number: "<<decimalNumber<<" == ";
        /*Print the fraction*/
        cout<<numerator<<"/"<<denominator<<" in Fraction Style"<<endl;

        long long int fullNumber = numerator / denominator;
        long long int lob = numerator % denominator;
        cout<<"My Style: "<<fullNumber<<'*'<<lob<<'/'<<denominator<<endl;
    }else{
        /*Else negative then that is proccesed by abs(value)*/
        decimalNumber = abs(decimalNumber);
        /*Consider integer part*/
        double intPart = floorl(decimalNumber);
        /*Consider real part*/
        double realPart = fmodl(decimalNumber, intPart);
        
        /*Consider precision value to convert fractional part to integral equivalent*/
        const long long int precisionValue = 1000000000; // 10^9
        /*Calculate GCD of integral equiavalent of fractional part and precision value*/
        long long int gcdValue = gcd(roundl(realPart * precisionValue), precisionValue);
        /*Calculate numerator, denominator*/
        long long int numerator = (roundl(realPart * precisionValue)) / gcdValue;
        long long int denominator = precisionValue / gcdValue;
        numerator = ((intPart * denominator) + numerator);
        /*Print given number*/
        cout<<"Given number: -"<<decimalNumber<<" == -";
        /*Print the fraction*/
        cout<<numerator<<"/"<<denominator<<" in Fraction Style"<<endl;

        long long int fullNumber = numerator / denominator;
        long long int lob = numerator % denominator;
        cout<<"My Style: -"<<fullNumber<<'*'<<lob<<'/'<<denominator<<endl;
    }
    
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    long double decimalNumber = -1.625;
    cout<<"Enter a decimal number here: ";
    cin>>decimalNumber;
    decimalToFractionalShape(decimalNumber);
    getche();
    return 0;
}

