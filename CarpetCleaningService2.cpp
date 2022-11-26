/**
 * @file CarpetCleaningService2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Yousuf's carpet cleaning service estimate cost for two types room
 * @version 0.1
 * @date 2022-11-26
 * @since SaturDay; 07:10 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"\t***Hello, Welcome to Yousuf's Carpet Cleaning Service***"<<endl;
    unsigned int numberOfSmallRoom {0}, numberOfLargeRoom {0};
    const float salesTaxRate {0.06};
    const unsigned int expiryDate {30};
    cout<<"Number of small rooms: ";
    cin>>numberOfSmallRoom;
    cout<<"Number of large rooms: ";
    cin>>numberOfLargeRoom;

    const float pricePerSmallRoom {25}, pricePerLargeRoom {35};
    double tax {0.0}, cost {0.0}, totalCost {0.0};
    cout<<"Sales tax rate: "<<salesTaxRate<<" %"<<endl;
    cout<<"Price per small room: $"<<pricePerSmallRoom<<endl;
    cout<<"Price per large room: $"<<pricePerLargeRoom<<endl;
    cost = (pricePerSmallRoom * numberOfSmallRoom) + (pricePerLargeRoom * numberOfLargeRoom);
    tax = cost * salesTaxRate;
    cout<<"Cost: $"<<cost<<endl;
    cout<<"Tax: $"<<tax<<endl;
    cout<<"==============================================="<<endl;
    totalCost = tax + cost;
    cout<<"Total estimate: $"<<totalCost<<endl;
    cout<<"This estimate is valid for "<<expiryDate<<" days"<<endl;
    return 0;
}
