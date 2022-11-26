/**
 * @file CarpetCleaningService.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Refactoring means change your code to make it better without changing behavior
 * @version 0.1
 * @date 2022-11-26
 * @since SaturDay; 06:44 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"\tHello, Welcome to Yousuf's Carpet Cleaning Service"<<endl;
    cout<<"\nHow Many Rooms would you like cleaned? ";
    unsigned int numbersOfRoom;
    cin>>numbersOfRoom;
    cout<<"Estimate for carpet cleaning service."<<endl;
    cout<<"Number of rooms: "<<numbersOfRoom<<endl;

    const double pricePerRoom {32.5};
    const float salesTax = 0.06f;
    cout<<"Price per room: $"<<pricePerRoom<<endl;
    cout<<"Tax rate: "<<salesTax<<endl;

    double cost {0};
    double taxCost {0};
    unsigned int estimateExpiryDate {30};
    cost = pricePerRoom * numbersOfRoom;
    taxCost = salesTax * cost;
    cout<<"Cost: "<<cost<<endl;
    cout<<"Tax: "<<taxCost<<endl;
    cout<<"===================================="<<endl;

    long double totalCost {cost + taxCost};
    cout<<"Total estimate: $"<<totalCost<<endl;
    cout<<"This is estimate valid for "<<estimateExpiryDate<<" Days"<<endl;

    return 0;
}
