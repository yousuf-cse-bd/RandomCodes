/**
 * @file PascalsTriangle_nCr.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pascal's Triangle using factorial method
 * @version 0.1
 * @date 2022-09-23
 * @since FriDay; 09:44 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Factorial number using loop iteration*/
// unsigned int makeFactorial(unsigned int n){
//     unsigned int factorial = 1;
//     for(register unsigned int i = 2; i<=n; i++){
//         factorial *= i;
//     }
//     return factorial;
// }
/*Factorial number using recursion*/
unsigned int makeFactorial(unsigned int n){
    if(n <= 1){
        return 1;
    }else{
        return (n*makeFactorial(n-1));
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    for(register unsigned int n = 0; n < 5; n++){
        for(register unsigned int r = 0; r <= n; r++){
            unsigned int value;
            /*nCr = n!/(n-r)!*(r)!*/
            value = makeFactorial(n) / (makeFactorial(n - r) * makeFactorial(r));
            cout<<value<<" ";
        }
        cout<<endl;
    }

    return 0;
}
