/**
 * @file MatrixDiagonals.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Square matrix manipulation: Main, Secondary diagonal and below main diagonal and upper main diagonal
 * @version 0.1
 * @date 2022-08-27
 * @since SaturDay; 09:56 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned int rowColumnSize = 4;
    int squareMatrix[rowColumnSize][rowColumnSize] = {{4, 6, 8, 7},
                                              {3, 1, 5, 4},
                                              {9, 1, 2, 8},
                                              {6, 4, 7, 3}};
    for(unsigned int row = 0; row < rowColumnSize; row++){
        for(unsigned column = 0; column < rowColumnSize; column++){
            cout<<squareMatrix[row][column]<<'\t';
        }
        cout<<endl;
    }
    cout<<"First Diagonal Element Are: ";
    for(unsigned int row = 0; row < rowColumnSize; row++){
        for(unsigned column = 0; column < rowColumnSize; column++){
            /*First Diagonal*/
            if(row == column){
                cout<<squareMatrix[row][column]<<" ";
            }
            /*Second Diagonal*/
            // else if((row + column) == rowColumnSize - 1){
            //     cout<<squareMatrix[row][column]<<" ";
            // }
        }
    }

    cout<<endl;

    /*Lower main diagonal*/
    unsigned int sumOfBelowDiagonal = 0;
    cout<<"All Elements Below the Main Diagonal:\n";
    for(unsigned int row = 1; row<rowColumnSize; row++){
        for(unsigned int column = 0; column < row; column++){
            cout<<squareMatrix[row][column]<<" ";
            sumOfBelowDiagonal += squareMatrix[row][column];
        }
        cout<<endl;
    }
    cout<<endl;
    /*Upper main diagonal*/
    unsigned int sumOfAboveDiagonal = 0;
    cout<<"All Elements Abo the Main Diagonal:\n";
    for(unsigned int row = 0; row < rowColumnSize; row++){
        for(unsigned int column = row + 1; column < rowColumnSize; column++){
            cout<<squareMatrix[row][column]<<" ";
            sumOfAboveDiagonal += squareMatrix[row][column];
        }
        cout<<endl;
    }
    
    cout<<"Sum of the All Elements Below Diagonal: "<<sumOfBelowDiagonal<<endl;
    cout<<"Sum of the All Elements Above Diagonal: "<<sumOfAboveDiagonal<<endl;
    return 0;
}
