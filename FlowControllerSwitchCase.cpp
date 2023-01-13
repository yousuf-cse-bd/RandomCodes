/**
 * @file FlowControllerSwitchCase.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Statements flow controller with switch-case
 * @version 0.1
 * @date 2023-01-13
 * @since FriDay; 03:16 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

constexpr int pen {10}, marker {20}, eraser {30};
constexpr int rectanle {40}, circle {50}, ellipse {60};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr int tool {marker};
    /*Case elements are must be constant value.*/
    switch (tool){
        case pen: cout<<"Active tool is pen."<<endl;break;
        case marker: cout<<"Active tool is marker."<<endl; break;
        case eraser: cout<<"Active tool is eraser."<<endl; break;
        case rectanle: cout<<"Active tool is rectangle."<<endl; break;
        case circle: cout<<"Active tool is circle."<<endl; break;
        case ellipse: cout<<"Active tool is ellips."<<endl; break;
        default: cout<<"You have to select right option."<<endl;break;
    }
    cout<<"Moving on."<<endl;
    return 0;
}
