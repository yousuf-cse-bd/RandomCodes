/**
 * @file RootCubicAndRandomNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Fraction value precision, cubic-root, square-root and random-number generator
 * @version 0.1
 * @date 2022-12-08
 * @since ThursDay; 12:04 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cmath> /*cbrt(), pow()*/
#include <ctime> /*srand()*/
#include <iomanip> /*Fraction value precision*/
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Root 2: "<<sqrtf(2.0f)<<endl;
    cout<<"Root 3.0: "<<cbrtf(3.0f)<<endl;
    cout<<fixed<<setprecision(1);
    double rootCubic {cbrt(27.0)};
    cout<<"Root Cubic: "<<rootCubic<<" of 27.0"<<endl;
    cout<<rootCubic<<"^"<<rootCubic<<": "<<pow(rootCubic, rootCubic)<<endl;

    cout<<"RandMax on my system: "<<RAND_MAX<<endl;
    unsigned int randomNumber {};
    unsigned short int limitMin {1}, limitMax {6};
    srand(time(nullptr)); /*Vary the all random-number*/
    size_t count {10};
    cout<<"The random number "<<limitMin<<" to "<<limitMax<<": ";
    for (size_t i = 0; i < count; i++){
        randomNumber = (rand() % limitMax) + limitMin;
        cout<<randomNumber<<" ";
    }
    cout<<endl;
    return 0;
}
