/**
 * @file FibonacciSeriesRecursively.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A fibonacci series using recursion function
 * @version 0.1
 * @date 2022-12-10
 * @since SaturDay; 05:02 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

size_t fibonacciSeries(unsigned short int n){
    if(n == 0){  /*if(n <= 1) return n*/
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return (fibonacciSeries(n-1) + fibonacciSeries(n-2));
    }
}
/*This is an one kind of loop*/
void recursion(unsigned short int i, unsigned short int count){
    if(i == count){
        cout<<fibonacciSeries(i)<<" ";
        return; 
    }else{
        cout<<fibonacciSeries(i)<<" ";
        recursion(++i, count); /*Must be used prefix unary operator*/
    }
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    recursion(0, 10);
    return 0;
}
