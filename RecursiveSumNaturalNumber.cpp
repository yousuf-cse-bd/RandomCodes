/**
 * @file RecursiveSumNaturalNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Program to find sum of natural numbers using recursion 
 * @version 0.1
 * @date 2023-01-18
 * @since WednesDay; 12:53 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

const size_t sumOfNaturalNumbers(const int lowerLimit, const int upperLimit);
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int lowerLimit {0}, upperLimit {0};
    cout<<"Enter lower limit here?: ";
    cin>>lowerLimit;
    cout<<"Enter upper limit here?: ";
    cin>>upperLimit;
    const size_t sum {sumOfNaturalNumbers(abs(lowerLimit), abs(upperLimit))};
    cout<<"The sum of natural numbers from: "<<abs(lowerLimit)<<" to "<<abs(upperLimit)<<" = "<<sum<<endl;
    return 0;
}
const size_t sumOfNaturalNumbers(const int lowerLimit, const int upperLimit){
    if(lowerLimit == upperLimit){
        return lowerLimit;
    }else{
        return (lowerLimit + sumOfNaturalNumbers(lowerLimit + 1, upperLimit));
    }
}
