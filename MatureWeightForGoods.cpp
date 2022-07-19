/**
 * @file MatureWeightForGoods.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Goods weight mature calculation
 * @version 0.1
 * @date 2022-07-19
 * @since TuesDay, 5:48PM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    double regularWeight, resellerWeight, sellerWeight;
    cout<<"Enter the regular weight: ";
    cin>>regularWeight;
    cout<<"Enter reseller weight: ";
    cin>>resellerWeight;
    cout<<"Enter your weight normal system here: ";
    cin>>sellerWeight;

    long double matureWeight = (regularWeight / resellerWeight) * sellerWeight;
    cout<<"Your expected weight: "<<matureWeight<<endl;
    return 0;
}
