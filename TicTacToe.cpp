/**
 * @file TicTacToe.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Game Project: Tic Tac Toe using 2D character type array
 * @version 0.1
 * @date 2022-09-01
 * @since ThursDay; 09:09 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
/*Using class-object concept*/
const int size = 3;
class TicTacToe{
private:
    /* data */
    char **charPtrGameBoard;
    unsigned short int selectedCell;
public:
    TicTacToe(/* args */){
        charPtrGameBoard = new char *[size];
        for(unsigned short int i = 0; i < size; i++){
            charPtrGameBoard[i] = new char [size];
        }
        /*Make all the cell number 1-9 assinging*/
        char startChar = '1';
        for(unsigned short int row = 0; row < size; row++){
            for(unsigned short int column = 0; column < size; column++){
                charPtrGameBoard[row][column] = startChar++;
            }
        }
    }
    /*Game start: Now draw the board with current data in game-board[][]
    array draw board*/
    void startGame(){
        short int  availableCell = 9;
        unsigned short int selectedCell = 0;
        unsigned short int row, column;
        int count = 0;
        /*Loop until we have played all the cells*/
        while(1 <= availableCell){
            /*First player assume X*/
            turnPlayerX(&selectedCell);
            /*Get row and column from selected cell*/
            getRowColumn(selectedCell, &row, &column);
            /*Update Game-Board Array*/
            charPtrGameBoard[row][column] = 'X';
            /*Decrease the available-sell*/ 
            availableCell--;
            /*Re-draw game board the current data in gameboard[][] array*/
            drawBoard(); 
            /*Check whether player one is winner or not*/
            if(firstDiagonal('X')){
                cout<<"\tFirst Player Win..!"<<endl;
                cout<<"Line: First Diagonal."<<endl;
                break;
            }
            else if(secondDiagonal('X')){
                cout<<"\tFirst Player Win..!"<<endl;
                cout<<"Line: Second Diagonal."<<endl;
                break;
            }
            else if(firstRow('X')){
                cout<<"\tFirst Player Win..!"<<endl;
                cout<<"Line: First Row."<<endl;
                break;
            }
            else if(secondRow('X')){
                cout<<"\tFirst Player Win..!"<<endl;
                cout<<"Line: Second Row."<<endl;
                break;
            }
            else if(thirdRow('X')){
                cout<<"\tFirst Player Win..!"<<endl;
                cout<<"Line: Third Row.";
                break;
            }
            else if(firstColumn('X')){
                cout<<"\tFirst Player Win..!"<<endl;
                cout<<"Line: First Column."<<endl;
                break;
            }
            else if(secondColumn('X')){
                cout<<"\tFirst Player Win..!"<<endl;
                cout<<"Line: Second Column."<<endl;
                break;
            }
            else if(thirdColumn('X')){
                cout<<"\tFirst Player Win..!"<<endl;
                cout<<"Line: Third Column."<<endl;
                break;
            }
            /*Loop Issue*/
            if(availableCell == 0){
                cout<<"\tGame Drawn...First Segment"<<endl;
                break;
            }
            /*Assume player two is O*/
            turnPlayerO(&selectedCell);
            /*Get row and column from selected cell*/
            getRowColumn(selectedCell, &row, &column);
            /*Update Game-Board Array*/
            charPtrGameBoard[row][column] = 'O';
            /*Decrease the available-sell*/ 
            availableCell--;
            /*Re-draw game board the current data in gameboard[][] array*/
            drawBoard(); 

            /*Check whether player TWO is winner or not*/
            if(firstDiagonal('O')){
                cout<<"\tSecond Player Win..!"<<endl;
                cout<<"Line: First Diagonal."<<endl;
                break;
            }
            else if(secondDiagonal('O')){
                cout<<"\tSecond Player Win..!"<<endl;
                cout<<"Line: Second Diagonal."<<endl;
                break;
            }
            else if(firstRow('O')){
                cout<<"\tSecond Player Win..!"<<endl;
                cout<<"Line: First Row."<<endl;
                break;
            }
            else if(secondRow('O')){
                cout<<"\tSecond Player Win..!"<<endl;
                cout<<"Line: Second Row."<<endl;
                break;
            }
            else if(thirdRow('O')){
                cout<<"\nSecond Player Win..!"<<endl;
                cout<<"Line: Third Row."<<endl;
                break;
            }
            else if(firstColumn('O')){
                cout<<"\tSecond Player Win..!"<<endl;
                cout<<"Line: First Column."<<endl;
                break;
            }
            else if(secondColumn('O')){
                cout<<"\tSecond Player Win..!"<<endl;
                cout<<"Line: Second Column."<<endl;
                break;
            }
            else if(thirdColumn('O')){
                cout<<"\tSecond Player Win..!"<<endl;
                cout<<"Line: Third Column."<<endl;
                break;
            }
            if(availableCell == 0){
                cout<<"\tGame Drawn...Last Segment"<<endl;
                break;
            }
        }
        
    }
    /*Function to drw board with current data in charPtrGameBoard[][] array*/
    void drawBoard(){
        system("cls");
        cout<<"\tTIC TAC TOE GAME\nDigit (1-9) indicates valid cell number:"<<endl;
        cout<<"\t\t-----|-----|------\n";
        for(unsigned short int row = 0; row < size; row++){
            cout<<"\t\t| ";
            for(unsigned short int column = 0; column < size; column++){
                cout<<charPtrGameBoard[row][column]<<"  |  ";
            }
            cout<<"\n\t\t-----|-----|------\n";
        }
    }
    /*Function to make player move O's move*/
    void turnPlayerO(unsigned short int *pointerCell){
        unsigned short int cell;
        /*Loop until player select a valid cell
        Note: cell with digits are valid cell*/
        do{
            /* code */
            cout<<"Player O,\nSelect VALID cell number here: ";
            cin>>cell;
        } while (0 == validateInput(cell));/*If validInput() rretun 1 then terminate loop*/
        /*Value update using pointer undirectly*/
        *pointerCell = cell;
    }
    /*Function to make player move X's move*/
    void turnPlayerX(unsigned short int *pointerCell){
        unsigned short int cell;
        /*Loop until player select a valid cell
        Note: cell with digits are valid cell*/
        do{
            /* code */
            cout<<"Player X,\nSelect VALID cell number here: ";
            cin>>cell;
        } while (false == validateInput(cell)); /*If validateInput() return true then terminate loop*/
        /*Value update using pointer undirectly*/
        *pointerCell = cell;
    }
    /*Function to check whether selected cell is VALID or not. If selected cell is already O or X,
    Or If it is not in 1-9, then return 0 to indicates INVALID selection.*/
    bool validateInput(unsigned short int cell){
        /*If cell is less than 1 and greater than 9 then return false*/
        if(cell < 1 || cell > 9){
            return false;
        }
        
        /*If selected cell is already occupied then return false*/
        unsigned short int row, column;
        /*Application of pointer at a time return of two values*/
        getRowColumn(cell, &row, &column);

        if(charPtrGameBoard[row][column] == 'X' || charPtrGameBoard[row][column] == 'O'){
            return false;
        } 

        return true;
    }
    /*Find row and column from cell number and two value goes to return to caller function*/
    void getRowColumn(unsigned short int cell, unsigned short int *row, unsigned short int *column){
        *row = (cell - 1) / size;
        *column = (cell - 1) % size;
    }
    /*Line: Fist Diagonal*/
    bool firstDiagonal(const char beadChar){
        bool status = true;
        for(unsigned short int row = 0; row < size; row++){
            for(unsigned short int column = 0; column < size; column++){
                if(row == column){
                    if(charPtrGameBoard[row][column] != beadChar){
                        status = false;
                    }
                }
            }
        }
        return status;
    }
    /*Line Second Diagonal*/
    bool secondDiagonal(const char beadChar){
        bool status = true;
        for(unsigned short int row = 0; row < size; row++){
            for(unsigned short int column = 0; column < size; column++){
                if((row + column) == (size - 1)){
                    if(charPtrGameBoard[row][column] != beadChar){
                        status = false;
                    }
                }
            }
        }
        return status;
    }
    /*Line: First Row*/
    bool firstRow(const char beadChar){
        bool status = true;
        for(unsigned short int row = 0; row < size; row++){
            for(unsigned short int column = 0; column < size; column++){
                if(row == 0 && column >= 0 && column < size){
                    if(charPtrGameBoard[row][column] != beadChar){
                        status = false;
                    }
                }
            }
        }
        return status;
    }
    /*Line: Second Row*/
    bool secondRow(const char beadChar){
        bool status = true;
        for(unsigned short int row = 0; row < size; row++){
            for(unsigned short int column = 0; column < size; column++){
                if(row == 1 && column >= 0 && column < size){
                    if(charPtrGameBoard[row][column] != beadChar){
                        status = false;
                    }
                }
            }
        }
        return status;
    }
    /*Line: Third Row*/
    bool thirdRow(const char beadChar){
        bool status = true;
        for(unsigned short int row = 0; row < size; row++){
            for(unsigned short int column = 0; column < size; column++){
                if(row == 2 && column >= 0 && column < size){
                    if(charPtrGameBoard[row][column] != beadChar){
                        status = false;
                    }
                }
            }
        }
        return status;
    }
    /*Line: First Column*/
    bool firstColumn(const char beadChar){
        bool status = true;
        for(unsigned short int row = 0; row < size; row++){
            for(unsigned short int column = 0; column < size; column++){
                if(column == 0 && row >= 0 && row < size){
                    if(charPtrGameBoard[row][column] != beadChar){
                        status = false;
                    }
                }
            }
        }
        return status;
    }
    /*Line: Second Column*/
    bool secondColumn(const char beadChar){
        bool status = true;
        for(unsigned short int row = 0; row < size; row++){
            for(unsigned short int column = 0; column < size; column++){
                if(column == 1 && row >= 0 && row < size){
                    if(charPtrGameBoard[row][column] != beadChar){
                        status = false;
                    }
                }
            }
        }
        return status;
    }
    /*Line: Third Column*/
    bool thirdColumn(const char beadChar){
        bool status = true;
        for(unsigned short int row = 0; row < size; row++){
            for(unsigned short int column = 0; column < size; column++){
                if(column == 2 && row >= 0 && row < size){
                    if(charPtrGameBoard[row][column] != beadChar){
                        status = false;
                    }
                }
            }
        }
        return status;
    }
    ~TicTacToe(){
        /*Delete the array created*/
        for(unsigned short int i = 0; i < size; i++){
            /*To delete the inner arrays*/
            delete [] charPtrGameBoard[i];
        }
        /*To delete the outer array which contained the pointer
        of all the inner arrays*/
        delete[] charPtrGameBoard;
        cout<<"\t\t\tThanks..."<<endl;
    }
};



/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    
    TicTacToe *ticTacToeObject = new TicTacToe();
    ticTacToeObject->drawBoard();
    ticTacToeObject->startGame();
    delete ticTacToeObject;
    
    getche();
    return 0;
}
