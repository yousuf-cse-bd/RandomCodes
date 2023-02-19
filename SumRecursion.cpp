/**
 * @file SumRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of nth number using recursion method
 * @version 0.1
 * @date 2023-02-20
 * @since SunDay; 12:08 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

constexpr size_t sumRecursion(const int &n){
    if(n <= 1){
        return n;
    }
    else{
        return (n+sumRecursion(n - 1));
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int n;
    cout<<"Enter a positive number here: ";
    cin>>n;

    cout<<"\tThe sum of "<<abs(n)<<": "<<sumRecursion(abs(n))<<endl;
    return 0;
}
