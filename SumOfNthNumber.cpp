/**
 * @file SumOfNthNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of nth number using recursion method
 * @version 0.1
 * @date 2022-09-23
 * @since FriDay; 11:12 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

unsigned long long int sumOfNthNumber(unsigned short int n){
    if(n <= 1){
        return n;
    }else{
        return (n+sumOfNthNumber(n-1));
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int n;
    cout<<"Enter nth number here: ";
    cin>>n;

    unsigned long long int sum = sumOfNthNumber(n);
    cout<<"Sum of 1 to "<<n<<" = "<<sum<<endl;
    return 0;
}
