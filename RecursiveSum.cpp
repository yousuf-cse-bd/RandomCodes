/**
 * @file RecursiveSum.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of natural number till nth
 * @version 0.1
 * @date 2023-01-18
 * @since WednesDay; 12:37 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

const size_t recursiveSum(const unsigned int n){
    if(n <= 0){
        return n;
    }else{
        return (n + recursiveSum(n-1));
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Sum: "<<recursiveSum(10)<<endl;
    return 0;
}
