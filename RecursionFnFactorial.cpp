/**
 * @file RecursionFnFactorial.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Factorial using recursion function
 * @version 0.1
 * @date 2022-09-23
 * @since FriDay; 11:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

unsigned long long int factorial(unsigned short int n)
{
    if(n <= 1){
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    cout<<"Time: "<<__TIME__<<endl;
    cout<<"Date: "<<__DATE__<<endl;
    unsigned short int n;
    cout<<"Enter Nth Value Here: ";
    cin>>n;

    unsigned long long int factValue = factorial(n);

    cout<<n<<"!  Factorial : "<<factValue<<endl;
    return 0;
}