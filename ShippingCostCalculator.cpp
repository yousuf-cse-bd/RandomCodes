/**
 * @file ShippingCostCalculator.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A simple shipping calculation
 * @version 0.1
 * @date 2022-11-28
 * @since MonDay; 10:33 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const float baseCost = 2.50f; /*$2.50*/
    float shippingCost {0.0};
    int length{0}, width{0}, height{0}; /*Inches*/
    const int tierThresold1{100}, tierThresold2{500}; /*Volume*/
    const int maxDimensionLength {10}; /*Inches*/
    const float tierSurcharge1(0.10f); /*10% extra*/
    const float tierSurcharge2(0.25f); /*25% extra*/
    cout<<"*****>:Welcome to the Package Cost Calculator:<*****"<<endl;
    cout<<"\tEnter length here: ";
    cin>>length;
    cout<<"\tEnter width here: ";
    cin>>width;
    cout<<"\tEnter height here: ";
    cin>>height;
    if(length > maxDimensionLength || width > maxDimensionLength || height > maxDimensionLength){
        cout<<"Sorry, Package rejected - dimesion exceeded..!"<<endl;
    }else{
        double packageCost {0.0};
        long long int packageVolume {length * width * height};
        packageCost = baseCost;
        if(packageVolume > tierThresold2){ /*tierThresold2 = 500*/
            packageCost += packageCost * tierSurcharge2; /*tierSurcharge2 = 0.25%*/
            cout<<"Adding tier surcharge2..."<<endl;
        }else if(packageVolume > tierThresold1){
            packageCost += packageCost * tierSurcharge1; /*tierSurcharge1 = 0.10%*/
            cout<<"Adding tier surcharge1..."<<endl;
        }
        cout<<"The volume of your package is: "<<packageVolume<<endl;
        cout<<"Your package will cost: $"<<packageCost<<" to ship."<<endl;
    }
    return 0;
}
