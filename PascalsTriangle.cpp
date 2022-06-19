/**
 * @file PascalsTriangle.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

/*Simple Factorial Function*/
unsigned int factorial(unsigned int n)
{
    unsigned int fact = 1;
    for(int i = 2; i<= n; i++)
    {
        fact *= i;
    }
    return fact;
}

/*Print Pascal's Trianlge*/
void pacalsTriangle(unsigned int N)
{
    // outer loop is driveing row value 
    for(int row = 0; row < N; row++)
    {
        for(int space = row; space < N; space++)
        {
            // This loop generate left spaces
            cout<<" ";
        }
        for(int column = 0; column<=row; column++)
        {
            unsigned int value;
            value = factorial(row) / (factorial(column) * factorial(row - column));
            cout<<value<<" "; 
        }
        cout<<endl;
    }
}
/*Driver Code*/
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout<<"Enter Nth value here?: ";
    cin>>n;
    unsigned int N = (n > 0) ? n : n*(-1);
    pacalsTriangle(N);
    return 0;
}
