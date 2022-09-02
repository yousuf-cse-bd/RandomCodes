/**
 * @file FindRowColumnFromCell.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of pointer for 1 or more return values at a time.
 * @version 0.1
 * @date 2022-09-01
 * @since ThursDay; 11:56 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <conio.h>
using namespace std;
#pragma pack(1)
/*Using class*/
class FindRowColumnFromCell{
private:
    /* data */
    unsigned int rowsSize, columnsSize;
    /*Declare memory block of size rowColumnSize*/
    int **intPointerTable;

public:
    FindRowColumnFromCell(unsigned int rowsSize, unsigned int columnsSize){
        this->rowsSize = rowsSize;
        this->columnsSize = columnsSize;
        /*Firstly row-blocks allocation*/
        intPointerTable = new int *[rowsSize];
        for(unsigned int column = 0; column < columnsSize; column++){
            /*Now column-blocks allocation each row*/
            intPointerTable[column] = new int[rowsSize];
        }
        /*calling Function*/
        // makeAssignValueAllSells();
    }
    void makeAssignValueAllSells(){
        unsigned int i,j, startValue = 1;
        cout<<"All Sell Below:\n";
        for(i = 0; i< rowsSize; i++){
            for(j = 0; j < columnsSize; j++){
                intPointerTable[i][j] = startValue++;
                cout<<intPointerTable[i][j]<<"\t";
            }
            cout<<endl;
        }
        // enterCellNumber();
    }
    void enterCellNumber(){
        int cell;
        cout<<"Enter your cell number(1-"<<(rowsSize * columnsSize)<<")?: ";
        cin>>cell;
        if(cell > 0 && cell <=(rowsSize * columnsSize)){
            unsigned int row, column;
            calculateRowColumnFromCellNumber(cell, &row, &column);
            cout<<"\n\tRow: "<<row<<" When Cell Number: "<<cell<<endl;
            cout<<"\tColumn: "<<column<<" When Cell Number: "<<cell<<endl;
            cout<<"\tIndex: ["<<row<<", "<<column<<"]\tCell = "<<cell<<endl;
        }else{
            cout<<"\tEnter the right number...!"<<endl;
            /*Call recursion function; ignore use of goto statement*/
            enterCellNumber();
        }
    }
    void calculateRowColumnFromCellNumber(int cell, unsigned int *row, unsigned int *column){
        *row = (cell - 1) / columnsSize;
        *column = (cell-1) % columnsSize;
    }
    ~FindRowColumnFromCell(){
        /*Delete the array created*/
        for(unsigned int column = 0; column < columnsSize; column++){
            /*To delete the inner arrays*/
            delete[] intPointerTable[column];
        }
        /*To delete the outer array which contained the pointer
        of all the inner arrays*/
        delete[] intPointerTable;
        cout<<"Thanks..."<<endl;
    }
};
/*Simple user defined function*/
unsigned int inputRowAndColumn(void){
    int inputValue;
    cin>>inputValue;
    if(inputValue <= 0){
        cout<<"Enter the Positive Integer number: ";
       return inputRowAndColumn();
    }else{
        return inputValue;
    }
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int rowsSize, columnsSize;
    cout<<"Enter the Rows-Size Here: ";
    rowsSize = inputRowAndColumn();
    // cout<<"Row: "<<rowsSize<<endl;
    cout<<"Enter the Columns-Size Here: ";
    columnsSize = inputRowAndColumn();
    // cout<<"Column: "<<columnsSize<<endl;

    /*Create an pointer type objcet with parameterize constructor*/
    FindRowColumnFromCell *newObject = new FindRowColumnFromCell(rowsSize, columnsSize);
    newObject->makeAssignValueAllSells();
    jump:
    newObject->enterCellNumber();
    goto jump;
    /*Memory de-allocation*/
    delete newObject;
    getche();
    return 0;
}


