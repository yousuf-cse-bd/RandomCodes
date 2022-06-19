/**
 * @file MyLoopArrayInit.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief Loop <, > and != demonstrate
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // Simple for loop
    // for(int i = 0; i<10; i++)
    // {
    //     cout<<i<<" ";
    // }
    // // MyStyle for loop
    // cout<<endl;
    // for(int i = 0; i!=10; i++)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // // Reverse simple for loop
    // for(int i = 10; i>0; i--)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(int i = 10; i!=0; i--)
    // {
    //     cout<<i<<" ";
    // }

    int X[2][2] = {1, 2, 3, 4};
    cout<<"Matix: X[2x2] = "<<endl;
    for(int row = 0; row!=2; row++)
    {
        for(int column = 0; column != 2; column++)
        {
            cout<<X[row][column]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    const int r = 2, c = 2;
    cout<<"Matrix: Y["<<r<<"x"<<c<<"] = "<<endl;
    int Y[r][c] = {1, 2, 3, 4};
     for(int row = 0; row!=r; row++)
    {
        for(int column = 0; column != c; column++)
        {
            cout<<Y[row][column]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int rZ, cZ;
    rZ = cZ = 2;
    cout<<"Matix: Z["<<rZ<<"x"<<cZ<<"] = "<<endl;
    int Z[rZ][cZ] = {
        {1, 2},
        {3, 4}
    };
    // initialize by zero '0'
    // for(int row = 0; row != rZ; row++)
    // {
    //     for(int column = 0; column != cZ; column++)
    //     {
    //        Z[row][column] = 0;
    //     }
    // }
    for(int row = 0; row != rZ; row++)
    {
        for(int column = 0; column != cZ; column++)
        {
            cout<<Z[row][column]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
