/**
 * @file TowDimensionalArrayPointerNotation.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief More fast pointer notation for array
 * @version 0.1
 * @date 2022-09-08
 * @since ThursDay; 10:23 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int rows, columns;
    rows = 3, columns = 4;
    unsigned short int count = 1; 
    int Array[rows][columns];
    cout<<"Type 1:"<<endl;
    for(unsigned short int row = 0; row < rows ;row++){
        for(unsigned short int column = 0; column < columns; column++){
           *(Array[row]+column) = count++;
           cout<<*(Array[row]+column)<<"\t";
        }
        cout<<endl;
    }
    rows = 4, columns = 3;
    count = 1;
    cout<<"\nType 2:"<<endl;
    for(unsigned short int row = 0; row < rows ;row++){
        for(unsigned short int column = 0; column < columns; column++){
           *(*(Array+row)+column) = count++;
           cout<<*(*(Array+row)+column)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}