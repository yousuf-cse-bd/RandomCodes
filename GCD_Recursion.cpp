/**
 * @file GCD_Recursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of Recursion: Find Greatest Common Divisor (Don't input negative value)
 * @version 0.1
 * @date 2022-08-25
 * @since ThursDay; 09:36 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

/*Find Greates Common Divisor: GCD*/
long long int findGCD(long long int a, long long int b){
    if(a == 0){
        return b;
    }
    else if(b == 0){
        return a;
    }
    else if(a < b){
        return findGCD(a, b % a);
    }
    else{
        return findGCD(b, a % b);
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Find GCD: "<<findGCD(12, 9)<<endl;
    return 0;
}
