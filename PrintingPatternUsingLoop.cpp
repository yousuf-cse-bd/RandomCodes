/**
 * @file PrintingPatternUsingLoop.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Program for Printing Pattern using Loops.
 * @version 0.1
 * @date 2022-07-26
 * @since TuesDay, 7:58 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    unsigned int n, len;
    cout<<"Enter nth number here: \n";
    cin>>n;
    int minValue;
    len = 2*n-1;
    for(unsigned int row = 0; row < len; row ++){
        for(unsigned int column  = 0; column < len; column ++){
            minValue = (row < column)?row : column;
            minValue = (minValue < (len - row))? minValue:len - row - 1;
            minValue = (minValue < (len - column))? minValue : len - column-1;
            cout<<n - minValue<<" ";
        }
        cout<<endl;
    }

    return 0;
}
