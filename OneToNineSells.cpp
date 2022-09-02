/**
 * @file OneToNineSells.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Traversing a 2D matrix or game-board as possible line.
 * @version 0.1
 * @date 2022-09-02
 * @since FriDay; 04:31 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
const unsigned short int size = 3;
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char gameBoard[size][size];
    char firstChar = '1';
    cout<<"At First Assinging then Printing Below:"<<endl;
    for(unsigned short int i = 0; i < size; i++){
        for(unsigned short int j = 0; j < size; j++){
            gameBoard[i][j] = firstChar++;
            cout<<gameBoard[i][j]<<'\t';
        }
        cout<<endl;
    }

    /*First Diagonal*/
    cout<<"First Diagonal: ";
    for(unsigned short int row = 0; row < size; row++){
        for(unsigned short int column = 0; column < size; column++){
            if(row == column){
                cout<<gameBoard[row][column]<<' ';
            }
        }
    }
    cout<<"\nOpposite Diagonal: ";
    for(unsigned short int row = 0; row < size; row++){
        for(unsigned short int column = 0; column < size; column++){
            if((row + column) == (size - 1)){
                cout<<gameBoard[row][column]<<' ';
            }
        }
    }
    
    cout<<"\nFirst Row: ";
    for(unsigned short int row = 0; row < size; row++){
        for(unsigned short int column = 0; column < size; column++){
            if(row == 0){
                cout<<gameBoard[row][column]<<' ';
            }
        }
    }
    cout<<"\nSecond Row: ";
    for(unsigned short int row = 0; row < size; row++){
        for(unsigned short int column = 0; column < size; column++){
            if(row == 1){
                cout<<gameBoard[row][column]<<' ';
            }
        }
    }
    cout<<"\nThird Row: ";
    for(unsigned short int row = 0; row < size; row++){
        for(unsigned short int column = 0; column < size; column++){
            if(row == 2){
                cout<<gameBoard[row][column]<<' ';
            }
        }
    }

    cout<<"\nFirst Column: ";
    for(unsigned short int row = 0; row < size; row++){
        for(unsigned short int column = 0; column < size; column++){
            if(column == 0){
                cout<<gameBoard[row][column]<<' ';
            }
        }
    }
    cout<<"\nSecond Column: ";
    for(unsigned short int row = 0; row < size; row++){
        for(unsigned short int column = 0; column < size; column++){
            if(column == 1){
                cout<<gameBoard[row][column]<<' ';
            }
        }
    }
    cout<<"\nThird Column: ";
    for(unsigned short int row = 0; row < size; row++){
        for(unsigned short int column = 0; column < size; column++){
            if(column == 2){
                cout<<gameBoard[row][column]<<' ';
            }
        }
    }

    return 0;
}
