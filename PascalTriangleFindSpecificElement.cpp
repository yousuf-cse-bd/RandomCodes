/**
 * @file PascalTriangleFindSpecificElement.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find a element from row and positon using nCr
 * @version 0.1
 * @date 2022-09-25
 * @since SunDay; 03:12 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Factorial uisng recursion method*/
unsigned long long int factorial(unsigned short int n){
    if(n <= 1){
        return 1;
    }else{
        return (n*factorial(n-1));
    }
}
/*Divae code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Consider row start with 0th to n*/
    int rowTh;
    int positionOfElement;
    cout<<"Enter rowTh number: ";
    cin>>rowTh;
    if(rowTh < 0){
        cout<<"Exit..!"<<endl;
        exit(0);
    }
    cout<<"Enter Position of Element: ";
    cin>>positionOfElement;
    if(positionOfElement < 1){
        cout<<"Exit...!"<<endl;
        exit(0);
    }
    else if(rowTh < positionOfElement){
        cout<<"Final Element: 1 at row: "<<rowTh<<" position: "<<positionOfElement<<endl;
        exit(0);
    }

    unsigned int firstAboveElement, secondAboveElement;
    /*nCr = n!/(n-r)!*r!*/
    cout<<"\tRow's value start with 0 and Position start with 1:"<<endl;
    unsigned short int n = rowTh-1;
    unsigned short int r = positionOfElement-1;
    firstAboveElement = factorial(n)/(factorial(n-r+1)*factorial(r-1));
    secondAboveElement = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"First Above Element: "<<firstAboveElement<<" At row: "<<n<<" Posistion: "<<r<<endl;
    cout<<"Second Above Element: "<<secondAboveElement<<" At row: "<<n<<" Position: "<<r+1<<endl;
    cout<<"Final Element: "<<(firstAboveElement + secondAboveElement)<<" At Row: "<<rowTh<<" Position: "<<positionOfElement<<endl;
    return 0;
}
