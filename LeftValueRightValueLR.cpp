
/*L-Values: An l-value is an object that occupies a location i memory and is addressable
1. Values that have names and are addressable
2. Modifiable if they are not constants*/

/*
    int x {100}; // x is an l-value
    x = 101;
    x = 1000 + 20;

    string name; // name is an l-value
    name = "Yousuf";
*/
/*R-Values: Usually r-values are on the right hand side of an assignement expression.
The r-values can be also be temporary values that the C++ compiler creates.*/
/*int x {100}; //100 is an r-value*/
/*int y = x + 200; //(x + 200) is an r-value*/
/*string name; 
name = "Yousuf"; //"Yousuf is an r-value"*/
/*int maxNumber = max(10, 20); //max(10, 20) is an r-value*/
/**
 * @brief r-values can be assigned to l-values explicitly
 * int x {100};
 * int y {0};
 * y = 100; //r-value 100 assigned to l-value y
 * x = x + y; //r value (x+y) assigned to l-values x 
 */

/**
* @brief
* The references we've used are l-value references
* Becuase we are referencing
* int x {101};
* int &ref1 = x; //ref1 is reference to l-value
* int &ref2 = 101; // Error 101 is an r-value
*/

/**
 * @file LeftValueRightValueLR.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Semantic materials about l-values and r-values
 * @version 0.1
 * @date 2023-01-19
 * @since ThursDay; 11:55 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */


#include <iostream>
using namespace std;

constexpr size_t square(const int &n){
    return (abs(n*n));
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Here 5 is not l-value or it has no reference*/
    // cout<<square(5)<<endl; /*5 is a r-value*/


    constexpr int n {-5};
    /*Here n is l-value or it has reference*/
    cout<<square(n)<<endl;
    return 0;
}
