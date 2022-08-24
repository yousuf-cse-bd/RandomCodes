/**
 * @file DecimalToFraction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Convert given Decimal number into an irreducible Fraction
 * @version 0.1
 * @date 2022-08-24
 * @since WednesDay; 09:38 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    double decimalNumber = 4.5;
    string decimalString(to_string(decimalNumber));
    string number;
    /*To remove decimal point [.]*/
    for(unsigned i = 0; i < decimalString.size(); i++){
        if(decimalString[i] != '.'){
            number += decimalString[i];
        }
    }
    // cout<<"Not Decimal: "<<number<<endl;
    /*Counting the digit right hand side from point*/
    unsigned int zeroCount = 0;
    for(int i = decimalString.size() - 1; i>=0; i--){
        if(decimalString[i] == '.'){
            break;
        }
        zeroCount++;
    }
    /*1 for the decimal and 0 for the number of digits beyond the decimal.*/
    string numeratorDenominator = "1";
    for(unsigned int numberOfZero = 1; numberOfZero <= zeroCount; numberOfZero++){
        numeratorDenominator += '0';
    }
    /*stoll(): string to long long int*/
    long long int numeratorNumber = stoll(number);
    // cout<<"NumeratorNUmber: "<<numeratorNumber<<endl;
    long long int denominatorNumber = stoll(numeratorDenominator);
    // cout<<"DenominatorNumber: "<<denominatorNumber<<endl;
    unsigned int divisor;
    /*Find common divisor number*/
    for(unsigned int i = 2; i <= denominatorNumber; i++){
        if(numeratorNumber % i == 0 && denominatorNumber % i == 0){
            divisor = i;
        }
    }
    numeratorNumber = numeratorNumber / divisor;
    denominatorNumber = denominatorNumber / divisor;
    cout<<"Given Decimal Number: "<<decimalNumber<<" == ";
    unsigned int intPart =  numeratorNumber / denominatorNumber;
    if(intPart > 0){
        cout<<intPart<<"*";
    }
    unsigned int lob =  numeratorNumber % denominatorNumber;
    cout<<lob<<"/";
    cout<<denominatorNumber<<" in Fraction."<<endl;
    return 0;
}
