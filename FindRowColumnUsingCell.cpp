/**
 * @file FindRowColumnUsingCell.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of pointer for 1 or more return values at a time.
 * @version 0.1
 * @date 2022-09-01
 * @since ThursDay; 11:56 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
class FindRowColumnUsingCell{
private:
    /* data */
    unsigned int rowColumnSize;
    /*Declare memory block of size rowColumnSize*/
    int **intPointerTable;

public:
    FindRowColumnUsingCell(const unsigned int rowColumnSize){
        this->rowColumnSize = rowColumnSize;
        /*Firstly row-blocks allocation*/
        intPointerTable = new int *[rowColumnSize];
        for(unsigned int column = 0; column < rowColumnSize; column++){
            /*Now column-blocks allocation each row*/
            intPointerTable[column] = new int[rowColumnSize];
        }
        /*calling Function*/
        makeAssignValueAllSells();
    }
    void makeAssignValueAllSells(){
        unsigned int i,j, startValue = 1;
        cout<<"All Sell Below:\n";
        /*design for 1*/
        if(rowColumnSize == 1){
            cout<<"|---|"<<endl;
            intPointerTable[0][0] = startValue;
            cout<<"| "<<intPointerTable[0][0]<<" |";
            cout<<"\n|---|"<<endl;
        }   /*Design for 2 & 3*/
        else if(rowColumnSize == 2 || rowColumnSize == 3){
            for(i = 0; i< rowColumnSize; i++){
                cout<<' ';
                for(j = 0; j < rowColumnSize; j++){
                    intPointerTable[i][j] = startValue++;
                    cout<<intPointerTable[i][j]<<"  |  ";
                }
                cout<<"\n----|-----|------\n";
            }
        }
        else{
            for(i = 0; i< rowColumnSize; i++){
                for(j = 0; j < rowColumnSize; j++){
                    intPointerTable[i][j] = startValue++;
                    cout<<intPointerTable[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
        enterCellNumber();
    }
    void enterCellNumber(){
        int cell;
        cout<<"Enter your cell number(1-"<<(rowColumnSize*rowColumnSize)<<")?: ";
        cin>>cell;
        if(cell > 0 && cell <=(rowColumnSize*rowColumnSize)){
            unsigned int row, column;
            calculateRowColumnFromCellNumber(cell, &row, &column);
            cout<<"\n\tRow: "<<row<<" When Cell Number: "<<cell<<endl;
            cout<<"\tColumn: "<<column<<" When Cell Number: "<<cell<<endl;
        }else{
            cout<<"\tEnter the right number...!"<<endl;
            /*Call recursion function*/
            enterCellNumber(); /*ignore use of goto*/
        }
    }
    void calculateRowColumnFromCellNumber(int cell, unsigned int *row, unsigned int *column){
        *row = (cell - 1) / rowColumnSize;
        *column = (cell-1) % rowColumnSize;
    }
    ~FindRowColumnUsingCell(){
        /*Delete the array created*/
        for(unsigned int column = 0; column < rowColumnSize; column++){
            /*To delete the inner arrays*/
            delete[] intPointerTable[column];
        }
        /*To delete the outer array which contained the pointer
        of all the inner arrays*/
        delete[] intPointerTable;
        cout<<"Thanks..."<<endl;
    }
};

int main(void){
    /* code */
    system("cls");
    int rowColumnSize, cell;
    cout<<"Enter the Row-Column-Size Here: ";
    cin>>rowColumnSize;
    if(rowColumnSize == 0){
        main();
    }
    rowColumnSize = (rowColumnSize < 0)?  rowColumnSize*(-1): rowColumnSize;
    /*Create an object with call parameterize constructor*/
    FindRowColumnUsingCell myBoard = FindRowColumnUsingCell(rowColumnSize);

    return 0;
}
