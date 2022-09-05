/**
 * @file TicTacToeDynamicWithBeep.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Game Project: Tic Tac Toe dynamically using 2D character type array and added beep sound
 * @version 0.1
 * @date 2022-09-04
 * @since ThursDay; 06:09 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;
#pragma pack(1)
/*Using class-object concept*/
const int size = 3;
class TicTacToeDynamicWithBeep{
private:
    /* data */
    char **charPtrGameBoard;
    unsigned short int selectedCell;
    string yourName;
    string oppositePlayerName;
public:
    TicTacToeDynamicWithBeep(string yourName){
        this->yourName = yourName;
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
        drawBoard();
    }
    TicTacToeDynamicWithBeep(string yourName, string oppositePlayerName){
        this->yourName = yourName;
        this->oppositePlayerName = oppositePlayerName;
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
        drawBoard();
    }
    /*Tossing at first using random number*/
    bool matchToss(){
        /*Update according to time*/
        srand(time(0));
        if(rand() % 2 == 1){
            return true;
        }
        else{
            return false;
        }
    }
    /*Game start: Now draw the board with current data in game-board[][]
    array draw board*/
    /*This function for single user*/
    void startGame1(){
        short int  availableCell = 9;
        unsigned short int selectedCell = 0;
        unsigned short int row, column;
        /*Loop until we have played all the cells*/
        bool toss = matchToss();
        /*If win in toss*/
            /*Tossing purpose begin for first one*/
            if(toss){
                /*First player assume X*/
                turnPlayerYouO(&selectedCell);
                /*Get row and column from selected cell*/
                getRowColumn(selectedCell, &row, &column);
                /*Update Game-Board Array*/
                charPtrGameBoard[row][column] = 'O';
                /*Decrease the available-sell*/ 
                availableCell--;
                /*Re-draw game board the current data in gameboard[][] array*/
                drawBoard(); 
            }/*Tossing purpose end for first one*/
            /*Tossing purpose begin for second one*/
            if(!toss){ 
                /*Assume player two is O*/
                turnPlayerComputerX(&selectedCell);
                /*Get row and column from selected cell*/
                getRowColumn(selectedCell, &row, &column);
                /*Update Game-Board Array*/
                charPtrGameBoard[row][column] = 'X';
                /*Decrease the available-sell*/ 
                availableCell--;
                /*Re-draw game board the current data in gameboard[][] array*/
                drawBoard(); 
            }
            /*Tossing purpose END for second one*/

        while(1 <= availableCell){
           
            /*Assume player ONE is O: User*/
            turnPlayerYouO(&selectedCell);
            /*Get row and column from selected cell*/
            getRowColumn(selectedCell, &row, &column);
            /*Update Game-Board Array*/
            charPtrGameBoard[row][column] = 'O';
            /*Decrease the available-sell*/ 
            availableCell--;
            /*Re-draw game board the current data in gameboard[][] array*/
            drawBoard(); 

            /*Check whether player YOU is winner or not*/
            if(firstDiagonal('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: First Diagonal."<<endl;
                break;
            }
            else if(secondDiagonal('O')){
                cout<<"\t"<<yourName<<":  Win..!"<<endl;
                cout<<"Line: Second Diagonal."<<endl;
                break;
            }
            else if(firstRow('O')){
                cout<<"\t"<<yourName<<":  Win..!"<<endl;
                cout<<"Line: First Row."<<endl;
                break;
            }
            else if(secondRow('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: Second Row."<<endl;
                break;
            }
            else if(thirdRow('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: Third Row."<<endl;
                break;
            }
            else if(firstColumn('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: First Column."<<endl;
                break;
            }
            else if(secondColumn('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: Second Column."<<endl;
                break;
            }
            else if(thirdColumn('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: Third Column."<<endl;
                break;
            }
            /*Loop Terminated*/
            if(availableCell == 0){
                cout<<"\tGame Drawn...First Segment"<<endl;
                break;
            }
            /*Player assume TWO X, COMPUTER*/
            turnPlayerComputerX(&selectedCell);
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
                cout<<"\tComputer Win...!"<<endl;
                cout<<"Line: First Diagonal."<<endl;
                break;
            }
            else if(secondDiagonal('X')){
                cout<<"\tComputer Win...!"<<endl;
                cout<<"Line: Second Diagonal."<<endl;
                break;
            }
            else if(firstRow('X')){
                cout<<"\tComputer Win...!"<<endl;
                cout<<"Line: First Row."<<endl;
                break;
            }
            else if(secondRow('X')){
                cout<<"\tComputer Win...!"<<endl;;
                cout<<"Line: Second Row."<<endl;
                break;
            }
            else if(thirdRow('X')){
                cout<<"\tComputer Win...!"<<endl;
                cout<<"Line: Third Row.";
                break;
            }
            else if(firstColumn('X')){
                cout<<"\tComputer Win...!"<<endl;
                cout<<"Line: First Column."<<endl;
                break;
            }
            else if(secondColumn('X')){
                cout<<"\tComputer Win...!"<<endl;
                cout<<"Line: Second Column."<<endl;
                break;
            }
            else if(thirdColumn('X')){
                cout<<"\tComputer Win...!"<<endl;
                cout<<"Line: Third Column."<<endl;
                break;
            }
            /*Loop Terminate*/
            if(availableCell == 0){
                cout<<"\tGame Drawn...Last Segment"<<endl;
                break;
            }
        }
    }
    /*This function for double user*/
    void startGame2(){
        short int  availableCell = 9;
        unsigned short int selectedCell = 0;
        unsigned short int row, column;
        /*Loop until we have played all the cells*/
        bool toss = matchToss();
        /*If win in toss*/
            /*Tossing purpose begin for first one*/
            if(toss){
                /*First player assume X*/
                turnPlayerYouO(&selectedCell);
                /*Get row and column from selected cell*/
                getRowColumn(selectedCell, &row, &column);
                /*Update Game-Board Array*/
                charPtrGameBoard[row][column] = 'O';
                /*Decrease the available-sell*/ 
                availableCell--;
                /*Re-draw game board the current data in gameboard[][] array*/
                drawBoard(); 
            }/*Tossing purpose end for first one*/
            /*Tossing purpose begin for second one*/
            if(!toss){ 
                /*Assume player two is O*/
                turnPlayerHeSheX(&selectedCell);
                /*Get row and column from selected cell*/
                getRowColumn(selectedCell, &row, &column);
                /*Update Game-Board Array*/
                charPtrGameBoard[row][column] = 'X';
                /*Decrease the available-sell*/ 
                availableCell--;
                /*Re-draw game board the current data in gameboard[][] array*/
                drawBoard(); 
            }
            /*Tossing purpose END for second one*/

        while(1 <= availableCell){
           
            /*Assume player ONE is O: User*/
            turnPlayerYouO(&selectedCell);
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
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: First Diagonal."<<endl;
                break;
            }
            else if(secondDiagonal('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: Second Diagonal."<<endl;
                break;
            }
            else if(firstRow('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: First Row."<<endl;
                break;
            }
            else if(secondRow('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: Second Row."<<endl;
                break;
            }
            else if(thirdRow('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: Third Row."<<endl;
                break;
            }
            else if(firstColumn('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: First Column."<<endl;
                break;
            }
            else if(secondColumn('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: Second Column."<<endl;
                break;
            }
            else if(thirdColumn('O')){
                cout<<"\t"<<yourName<<": Win..!"<<endl;
                cout<<"Line: Third Column."<<endl;
                break;
            }
            /*Loop Issue*/
            if(availableCell == 0){
                cout<<"\tGame Drawn...First Segment"<<endl;
                break;
            }
            /*Player assume TWO X, COMPUTER*/
            turnPlayerHeSheX(&selectedCell);
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
                cout<<"\t"<<oppositePlayerName<<": Win...!"<<endl;
                cout<<"Line: First Diagonal."<<endl;
                break;
            }
            else if(secondDiagonal('X')){
                cout<<"\t"<<oppositePlayerName<<": Win...!"<<endl;
                cout<<"Line: Second Diagonal."<<endl;
                break;
            }
            else if(firstRow('X')){
                cout<<"\t"<<oppositePlayerName<<": Win...!"<<endl;
                cout<<"Line: First Row."<<endl;
                break;
            }
            else if(secondRow('X')){
                cout<<"\t"<<oppositePlayerName<<": Win...!"<<endl;
                cout<<"Line: Second Row."<<endl;
                break;
            }
            else if(thirdRow('X')){
                cout<<"\t"<<oppositePlayerName<<": Win...!"<<endl;
                cout<<"Line: Third Row.";
                break;
            }
            else if(firstColumn('X')){
                cout<<"\t"<<oppositePlayerName<<": Win...!"<<endl;
                cout<<"Line: First Column."<<endl;
                break;
            }
            else if(secondColumn('X')){
                cout<<"\t"<<oppositePlayerName<<": Win...!"<<endl;
                cout<<"Line: Second Column."<<endl;
                break;
            }
            else if(thirdColumn('X')){
                cout<<"\t"<<oppositePlayerName<<": Win...!"<<endl;
                cout<<"Line: Third Column."<<endl;
                break;
            }
            /*Loop issue*/
            if(availableCell == 0){
                cout<<"\tGame Drawn...Last Segment"<<endl;
                break;
            }
        }
    }
    /*Function to drw board with current data in charPtrGameBoard[][] array*/
    void drawBoard(){
        system("cls");
        cout<<"TIC TAC TOE GAME"<<endl;
        cout<<"Digit (1-9) indicates valid cell number:"<<endl;
        cout<<"\t\t-----|-----|------\n";
        for(unsigned short int row = 0; row < size; row++){
            cout<<"\t\t| ";
            for(unsigned short int column = 0; column < size; column++){
                cout<<charPtrGameBoard[row][column]<<"  |  ";
            }
            cout<<"\n\t\t-----|-----|------\n";
        }
    }
    /*Function to make player move O's move, USER*/
    void turnPlayerYouO(unsigned short int *pointerCell){
        unsigned short int cell;
        /*Loop until player select a valid cell
        Note: cell with digits are valid cell*/
        do{
            /* code */
            cout<<yourName<<": Press,\nSelect VALID cell number here: ";
            cin>>cell;
            /*First arg: frequency and Second arg: millisecond*/
            Beep(580, 900);
        } while (0 == validateInput(cell));/*If validInput() rretun 1 then terminate loop*/
        /*Value update using pointer undirectly*/
        *pointerCell = cell;
    }
    /*Function to make player move X's move, Computer*/
    void turnPlayerComputerX(unsigned short int *pointerCell){
        unsigned short int cell;
        /*Loop until player select a valid cell
        Note: cell with digits are valid cell*/
        do{
            /* code */
            // cout<<"Player X,\nSelect VALID cell number here: ";
            srand(time(0));
            cell = rand() % 9;
            /*Radn() return: 0 to 8*/
            cell++;
        } while (false == validateInput(cell)); /*If validateInput() return true then terminate loop*/
        /*Value update using pointer undirectly*/
        *pointerCell = cell;
        /*First arg: frequency and Second arg: millisecond*/
        Beep(580, 900);
    }
    /*This method for double user*/
    /*Function to make player move X's move, Computer*/
    void turnPlayerHeSheX(unsigned short int *pointerCell){
        unsigned short int cell;
        /*Loop until player select a valid cell
        Note: cell with digits are valid cell*/
        do{
            /* code */
            // cout<<"Player X,\nSelect VALID cell number here: ";
            cout<<oppositePlayerName<<": Press,\nSelect VALID cell number here: ";
            cin>>cell;
            /*First arg: frequency and Second arg: millisecond*/
            Beep(580, 900);
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
    ~TicTacToeDynamicWithBeep(){
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
    printf("%c%c%c->WELCOME TO TIC TOC TOE NEW GAME<-%c%c%c\n",1,1,1,2,2,2);
    short int userNumber;
    string yourName, oppositePlayerName;
    TicTacToeDynamicWithBeep *singleUser;
    TicTacToeDynamicWithBeep *doubleUsers;
    do
    {
        printf("1 for Single User With Computer%c%c%c\n", 6,6,6);
        printf("2 for Double Users%c%c%c\n", 3,3,3);
        printf("0 for EXIT%c%c%c\n", 5,5,5);
        cin>>userNumber;
        switch (userNumber)
        {
        case 1:
            cout<<"Enter Your Name Here: ";
            cin>>yourName;
            singleUser = new TicTacToeDynamicWithBeep(yourName);
            singleUser->startGame1();
            break;
        case 2:
            cout<<"Enter Your Name Here: ";
            cin>>yourName;
            cout<<"Enter He/She's Name Here: ";
            cin>>oppositePlayerName;
            doubleUsers = new TicTacToeDynamicWithBeep(yourName, oppositePlayerName);
            doubleUsers->startGame2();
            break;
        case 0:
            cout<<"EXIT the game...!"<<endl;
            break;
        default:
            cout<<"Enter 1 Or 2 Digit..."<<endl;
            break;
        }
        
    } while (userNumber != 0);
    
    delete singleUser;
    delete doubleUsers;
    getche();
    return 0;
}
