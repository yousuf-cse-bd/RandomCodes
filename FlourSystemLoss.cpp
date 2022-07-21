/**
 * @file FlourSystemLoss.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculation Flour System Loss
 * @version 0.1
 * @date 2022-07-21
 * @since Thursday, 5:35 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    long double rawMaterial, totalFlourForSytem, finalFlour;
    float systemLoss;
    cout<<"Input total raw material here: ";
    cin>>rawMaterial;
    cout<<"Enter machine system loss per 40KGs: ";
    cin>>systemLoss;
    totalFlourForSytem = (rawMaterial * systemLoss)/40.0;
    cout<<"Your: "<<totalFlourForSytem<<" KGs Per 40 KGs"<<endl;
    finalFlour = rawMaterial - totalFlourForSytem;
    cout<<"Your final flour: "<<finalFlour<<" KGs"<<endl;

    return 0;
}
