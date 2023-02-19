/**
 * @file SumNthUsingRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of nth number using recursion method
 * @version 0.1
 * @date 2022-06-11
 * @since SaturDay; 11:59 PM 
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

constexpr size_t sum(const unsigned int &n){
    if(n==0){
        return 0;
    }
    else{
        return (n + sum(n-1));
    }   
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Sum of 10 = "<<sum(10)<<endl;
    return 0;
}
