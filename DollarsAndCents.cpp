/**
 * @file DollarsAndCents.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dollar money changed
 * @version 0.1
 * @date 2022-11-28
 * @since MonDay; 04:44 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const short int cents100 {100}; /*100 cents = 1 dollar*/
    const short int cents25 {25}; /*25 censts = 1 quarter*/
    const short int cents10 {10}; /*10 censt = 1 dime*/
    const short int centsl5 {5}; /*5 cents = 1 nickel*/
    const short int cent1 {1}; /*1 cent = 1 penny*/

    int cents;
    cout<<"Enter the cents value here: ";
    cin>>cents;
    cout<<"The entered cents: "<<cents<<endl;
    short int dollar{0}, quarter{0}, dime{0}, nickel{0};

    dollar = cents / cents100;
    cout<<"Dollars: "<<dollar<<endl;
    cents %= cents100;

    quarter = cents / cents25;
    cout<<"Quarters: "<<quarter<<endl;
    cents %= cents25;

    dime = cents / cents10;
    cout<<"Dimes: "<<dime<<endl;
    cents %= cents10;

    nickel = cents / centsl5;
    cout<<"Nickels: "<<nickel<<endl;
    cents %= centsl5;

    cout<<"Pennies: "<<cents<<endl;

    return 0;
}
