/**
 * @file PascalsTriangle1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pascal's Triangle
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int row, space, i, j, column = 1;
    cout<<"Enter row number here: ";
    cin>>row;
    for(i = 0; i< row; i++){
        for(space = 1; space <=row - i; space++){
            cout<<" ";
        }
        for(j = 0; j<=i; j++){
            if(i == 0 || j == 0){
                column = 1;
            }
            else{
                column = column * (i - j+1)/j;
            }
            cout<<column<<" ";
        }
        cout<<endl;
    }
    return 0;
}
