/**
 * @file SpiralHelicallyTraverse.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Matrix: Spiral or Helical Traverse
 * @version 0.1
 * @date 2022-08-29
 * @since MonDay; 10:32 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
void spiralHelicallyTraverse(int squareMatrix[][5], unsigned int rowColumnSize){
    /*Normal Traversing*/
    cout<<"Normal Traversing Below:"<<endl;
    for(unsigned int row = 0; row < rowColumnSize; row++){
        for(unsigned int column = 0; column < rowColumnSize; column++){
            cout<<'\t'<<squareMatrix[row][column];
        }
        cout<<endl;
    }

    /*Spiral Helically Traverse*/
    cout<<"\nSpiral Helically Traverse:"<<endl;
    int  row = 0;
    while(row < rowColumnSize){
        /*Print first row: 4,6,8,7,3*/
        for(unsigned int column = row; column < rowColumnSize; column++){
            cout<<squareMatrix[row][column]<<' ';
        }
        /*Print second row last column: 2,1,9,4*/
        // cout<<endl;
        for(unsigned int column = row + 1; column < rowColumnSize; column++){
            cout<<squareMatrix[column][rowColumnSize-1]<<' ';
        }
        /*print last row: 8,2,7,5*/
        for(int column = rowColumnSize - 2; column>=row; column--){
            cout<<squareMatrix[rowColumnSize - 1][column]<<' ';
        }
        /*print: 6,9,3*/
        for(int column = rowColumnSize - 2; column > row; column--){
            cout<<squareMatrix[column][row]<<' ';
        }
        // cout<<endl;
        row ++;
        rowColumnSize--;
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    const unsigned int rowColumnSize = 5;
    int squareMatrix[rowColumnSize][rowColumnSize] = {{4,6,8,7,3},
                                                      {3,1,5,4,2},
                                                      {9,1,2,8,1},
                                                      {6,4,7,3,9},
                                                      {5,7,2,8,4}};
    spiralHelicallyTraverse(squareMatrix, rowColumnSize);
    return 0;
}
